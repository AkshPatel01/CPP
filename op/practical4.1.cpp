//Name=Kansagara Aksh
//Enr.No.=206230316105
//Batch=C C1
//Date=25-03-2022
//Aim=Call by Value in C++

#include <iostream>
using namespace std;  

void change(int data);  
int main()  
{  
int data = 3;                                       //value of data is already defined in program
change(data);  
cout << "Value of the data is: " << data<< endl;    //showing output
return 0;  
}  
void change(int data)  
{  
data = 5;  
}  