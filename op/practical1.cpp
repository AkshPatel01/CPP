//Name=Kansagara Aksh
//Enr. No.=206230316105
//Batch=C C1
//Date=8/03/2022
//Aim=calculator in C++

#include<iostream>
using namespace std;

int main()
{ 
	char ak;
	float num1, num2;
	
	cout<<"enter op="; 						//ask to enter operator 
	
	cin>>ak;
	
	cout<<"enter number="; 						//ask to enter two numbers

	cin>>num1>>num2;

	cout<<"Ans is=";						//answer declared here

	switch(ak){ 							//switch case
		
		case'+': 						//addition
			cout<<num1+num2;
			break;
		case'-':						//substraction
			cout<<num1-num2;
			break;
		case'*':						//Multiplication
			cout<<num1*num2;
			break;
		case'/':						//division
			cout<<num1/num2;
			break;

		default:
			cout<<"error! operator is not correct"; 	//if operator is invalid then default 
			break;
	}
	return 0;
}

