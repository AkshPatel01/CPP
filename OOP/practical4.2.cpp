//Name=Kansagara Aksh
//Enr.No.=206230316105
//Batch=C C1
//Date=29-03-2022
//Aim=Function Overloading in C++

#include<iostream>
using namespace std;

class ak{                                   //class created named ak
    public:                                 //access specifier is public
    static int add(int a,int b)             //2 int taken
    {
        return a + b;                       //addition of two integer
    }
    static int add(int a,int b,int c)       //3 int taken
    {
        return a+b+c;                       //addition of three integer
    }
};
int main(void)
{
    ak C;
    cout<<C.add(10,20)<<endl;
    cout<<C.add(12,20,23)<<endl;
    return 0;
}