//Name=Kansagara Aksh
//Enr.No.=206230316105
//Batch=C C1
//Date=15-03-2022
//Aim=calculator using switch case and while loop in C++

#include<iostream>
using namespace std;
struct ar{
	int a;
};
int main()
{
	struct ar x[2];
	char ch,op;
	cout<<"enter the operation"<<endl;  					//enter operator
	cin>>op;
	while(ch='n')								//loop for extra calculatio
	{
		switch(op)							//switch case for different calculatiom
		{
			case'+':						//addition
				cout<<"emter first num"<<endl;
				cin>>x[0].a;
				cout<<"enter second num"<<endl;
				cin>>x[1].a;
				cout<<"addition is "<<x[0].a+x[1].a<<endl;
				break;
			case'-':						//substraction
				cout<<"emter first num"<<endl;
				cin>>x[0].a;
				cout<<"enter second num"<<endl;
				cin>>x[1].a;
				cout<<"Substraction is "<<x[0].a-x[1].a<<endl;
				break;
			case'*':						//multiplication
				cout<<"emter first num"<<endl;
				cin>>x[0].a;
				cout<<"enter second num"<<endl;
				cin>>x[1].a;
				cout<<"Multiplication is "<<x[0].a*x[1].a<<endl;
				break;
			case'/':						//division
				cout<<"emter first num"<<endl;
				cin>>x[0].a;
				cout<<"enter second num"<<endl;
				cin>>x[1].a;
				cout<<"division is "<<x[0].a/x[1].a<<endl;
				break;
			default:
				cout<<"select right operation"<<endl;
		}
		cout<<"do you want to continue:"<<endl; 			//asking to stay in calculation
		cin>>ch;
		if(ch=='y')
		{
			cout<<"enter operation"<<endl;
			cin>>op;
		}
	}
}
