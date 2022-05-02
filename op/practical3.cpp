//Name=Kansagara Aksh
//Enr.No.=206230316105
//Batch=C C1
//Date=22-03-2022
//Aim=class and object in C++

#include<iostream>
using namespace std;

class students{     								//create class named students
	long int enr;
	char name[15];
	public:									//access specifier is public
	void enterenr()
	{
		cout<<"enter enr"<<endl;					//asking to enter enrollment number
		cin>>enr;
	}
	void entername()
	{
		cout<<"enter name"<<endl;					//asking to enter name
		cin>>name;
	}
	void display()
	{
		cout<<"		"<<enr<<"		"<<name<<"\n"<<endl;	//heading for output
	}
};

int main()
{
	int i;
	class students s[2];
	for(i=0; i<2; i++)
	{
		s[i].enterenr();
		s[i].entername();
	}
	system("clear");							//clear screen cmd for linux
	cout<<"		Enrollment no"<<"	Name\n\n"<<endl;		//print entered enrollment num. and name

	for(i=0; i<2; i++)
	{
		s[i].display();
	}
	return 0;
}
