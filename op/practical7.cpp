//Name=Kansagara Aksh
//Enr.No.=206230316105
//Batch=C C1
//Date=12-04-2022
//Aim=matrix addition in c++

#include<iostream>
using namespace std;

class matrix{
	int a[3][3];
	public:
	matrix(void){
		cout<<"constructor called"<<endl;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>a[i][j];
			}
		}
	}
	void add(class matrix x) {
		int t[3][3];
		cout<<"Addition is"<<endl;

		for (int i=0;i<3;i++) {
			for(int j=0;j<3;j++) {
				cout<<a[i][j] + x.a[i][i];
			}
			cout<<endl;
		}
	}
};
int main(){
	class matrix m1,m2,m3;
	m1.add(m2).add(m3);
	return 0;
}
