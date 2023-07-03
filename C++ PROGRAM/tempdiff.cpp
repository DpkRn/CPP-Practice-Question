//write a generic program to display minimum no in integer and float
#include<iostream>
#include<conio.h>
using namespace std;
template <class Tint,class Tfloat>
void Min(Tint x,Tfloat y)
{
    if(x>y)
        cout<<x<<" is greater "<<endl;
    else
        cout<<y<<" is greater"<<endl;
}
int main()
{
    Min(3,4.5);
    Min(4.5,2);
    return 0;
}
