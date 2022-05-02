#include<iostream>
using namespace std;

class ak{
    int a;
    int b;
    int c;

    public:
    ak(int a,int b=5,int c=10){
        a=a;
        b=b;
        c=c;
    }
    void aksh();
};

void ak :: aksh(){
    cout<<"the value of a,b and c is"<<a<<""<<b<<" and "<<c<<endl;
};

int main(){
    ak s(10,11);
    s.aksh();
    return 0;
}