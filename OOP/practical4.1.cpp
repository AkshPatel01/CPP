//Name=Kansagara Aksh
//Enr.No.=206230316105
//Batch=C C1
//Date=29-03-2022
//Aim=call by value and call by reference.

#include<iostream>
using namespace std;

class swp                           //class created named swp
{
    public:                         //access specifier is public
    void call_val(int a,int b)      //for call by value
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    void call_ref(int&a,int &b)     //for call by reference
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
};
int main()
{
    class swp sp;
    int a=100,b=200;                                        //value is defined
    cout<<"Before swap in call by value a is:"<<a<<endl;    //call by value 
    cout<<"Before swap in call by value b is:"<<b<<endl;
    sp.call_val(a,b);
    cout<<"After swap in call by value a is:"<<a<<endl;
    cout<<"After swap in call by value b is:"<<b<<endl;
    cout<<"\n"<<endl;
    cout<<"\n"<<endl;
    cout<<"Before swap in call by reference a is:"<<a<<endl;    //call by reference
    cout<<"Before swap in call by reference b is:"<<b<<endl;
    sp.call_ref(a,b);
    cout<<"After swap in call by reference a is:"<<a<<endl;
    cout<<"After swap in call by reference b is:"<<b<<endl;

    return 0;
}