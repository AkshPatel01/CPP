//Name=Kansagara Aksh
//Enr.No.=206230316105
//Batch=C C1
//Date=05-04-2022
//Aim=matrix addition in c++

#include<iostream>
using namespace std;

class matrix{
	int a[2][2];
	public:
	matrix(void){
		cout<<"constructor called"<<endl;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cin>>a[i][j];
			}
		}
	}
	void add(class matrix x) {
		int t[2][2];
		cout<<"Addition is"<<endl;

		for (int i=0;i<2;i++) {
			for(int j=0;j<2;j++) {
				cout<<a[i][j] + x.a[i][i];
			}
			cout<<endl;
		}
	}
};
int main(){
	class matrix m1,m2;
	m1.add(m2);
	return 0;
}
