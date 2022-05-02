//Name=Kansagara Aksh
//Enr.No.=206230316105
//Batch=C C1
//Date=25-03-2022
//Aim=Call By Reference in C++

#include<iostream>  
using namespace std;    

void swap(int *x, int *y)  
{  
 int swap;  
 swap=*x;  
 *x=*y;  
 *y=swap;  
}  
int main()   
{    
 int x=500, y=100;                              //value of data is already defined in program
 swap(&x, &y);                                  // passing value to function 
 cout<<"Value of x is: "<<x<<endl;              //print output
 cout<<"Value of y is: "<<y<<endl;              //print output
 return 0;  
}