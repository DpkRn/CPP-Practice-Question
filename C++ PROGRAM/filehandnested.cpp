#include<iostream>
using namespace std;
int main()
{
    float n1,n2;
    cout<<"Enter first float no:"
    cin>>n1;
    cout<<"Enter second no:";
    cin>>n2;
    try{
    if(n1!=n2)
    {
    float div=(float)n1/n2;
    if(div<0)
        throw 'e';
    cout<<endl<<"n1/n2="<<div;

    }
    else
        throw n2;
    }
    catch(int n)
    {

    }
    catch(char c)
    {

    }
}
