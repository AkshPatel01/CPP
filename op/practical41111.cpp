//Name=Kansagara Aksh
//Enr.No.=206230316105
//Batch=C C1
//Date=29-03-2022
//Aim=call by value and reference

#include<iostream>
using namespace std;

void swap(int &x,int &y);
int main()
{
	int a=500;
	int b=800;
	cout<<"before swap,value of a:"<<a<<endl;
	cout<<"before swap,value of b:"<<b<<endl;

	swap(a,b);

	cout<<"after swap,value of a:"<<a<<endl;
	cout<<"after swap,value of b:"<<b<<endl;
	return 0;

}
void swap(int&x,int&y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
