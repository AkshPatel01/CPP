//Name=Kansagara Aksh
//Enr.No.=206230316105
//Batch=C C1
//Date=22-03-2022
//Aim=Array of Object in C++.

#include<iostream>
#include<string.h>
using namespace std;

class student
{
    public:
    int enr;
    char name[10];
};
int main()
{
    int x,enr;
    char name[50];
    class student s[99];
    for (int x=0; x<99; x++)
    {
        s[x].enr=x;
        strcpy(s[x].name,"Aksh Kansagara");
        cout<<s[x].name<<endl;
        cout<<s[x].enr<<endl;
    }
    return 0;
}