#include<iostream>
using namespace std;
int devide(int a,int b)
{
    if(b==0)
        throw "devide by zero exception";
    if(a<0||b<0)
        throw "not to be negative exception";
    return a/b;
}

int main()
{

    cout<<"enter two no:";
    int a,b;
    cin>>a>>b;
    try
    {
        int result=devide(a,b);
    cout<<"reult:"<<result;
    }
    catch(const char* e)
    {
        cout<<e<<endl;
    }
    return 0;
}
