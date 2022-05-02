//Name=Kansagara Aksh
//Enr.No.=206230316105
//Batch=C C1
//Date=29-03-2022
//Aim=Function Overloading

#include<iostream>
using namespace std;

void add(int a, int b=99){			//two integers are taken but b=99 is defined
	cout<<"a+b="<<a+b;
}
void add(float a,float b){   			//two floats are taken 
	cout<<"a+b="<<a+b;
}

int main(){
	int a=10,b=20;         			//value of integer
	float p=22.2,q=33.3;			//value of float

	add(a);		
	add(a,b);
	add(p,q);
	return 0;
}
	
