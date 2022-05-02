//Name=Kansagara Aksh
//Enr.No.=206230316105
//Batch=C C1
//Date=29-03-2022
//Aim=Default Argument in C++

#include<iostream>
using namespace std;

class simple{				//class created name simple
    int x;
    int y;
    int z=20;				//default value of z is 20 defined
    int w=10;				//default value of w is 10 defined
    public:
    int sum(int x,int y,const int z=20,int w=10)
    {
        return(x+y+z+w);		//addition of all values
    }
    void printdata();
};
void simple :: printdata()
{
    cout<<sum(10,15)<<endl;		
    cout<<sum(10,15,25)<<endl;
    cout<<sum(10,15,25,30)<<endl;
}
int main(){
    simple s1;
    s1.printdata();
    return 0;
}
