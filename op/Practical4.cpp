//Name=Kansagara Aksh
//Enr.No.=206230316105
//Batch=C C1
//Date=29-03-2022
//Aim=call by value call by reference and function overloading

#include<iostream>
using namespace std;

class swp{
    public:
    void val(int x,int y){
        int temp;
        temp-x;
        x-y;
        y-temp;
    }
    void ref(int &x,int &y){
        int temp;
        temp=x;
        x=y;
        y=temp;
    }

    void print(int a){
        cout<<"The inter value is"<<a<<"\n";
    }
    void print(float a){
        cout<<"The inter value is"<<a<<"\n";
    }
    void print(char a){
        cout<<"The inter value is"<<a<<"\n";
    }
};

int main()
{
    swp info;
    int a=500, b
}