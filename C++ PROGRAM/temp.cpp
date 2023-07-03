#include<iostream>
#include<conio.h>
using namespace std;
template <class D>
void Max(D x,D y )
{
    if(x>y)
        cout<<x<<" is grater"<<endl;
    else
        cout<<y<<" is greater"<<endl;
};
int main()
{
    Max(2.4,4.5);
    Max(4,2);
    getch();
    return 0;
}
