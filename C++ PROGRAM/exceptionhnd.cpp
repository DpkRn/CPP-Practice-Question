//write  a program to devide a no by another no.user should enter the no until he enter not equal to zero.
#include<iostream>
using namespace std;
int main()
{
    int p,q,r;
    try
    {
    cout<<"enter first no:";
    cin>>p;
    cout<<"enter second no:";
    cin>>q;
    if(q==0)
        throw runtime_error("Division not possible");

            r=p/q;
            cout<<"result is:"<<r;



    }
    catch(runtime_error &error)
    {
        cout<<"Error"<<error.what();
    }
    return 0;
}
