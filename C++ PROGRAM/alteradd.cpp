#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{ int sum=0;
    cout<<"enter no:";
    int n;
    cin>>n;

    string str=to_string(n);
    int flag=0;
    for(int i=0;i<str.length();i++)
    {
       if(isalpha(str[i]))
       {
        flag=1;
        cout<<str[i]<<endl;
        break;
       }
    }
    if(flag==0)
    {
    for(int i=0;i<str.length();i++)
    {
       if(i%2==0)
         sum=sum+(int(str[i])-48);
         else
         sum=sum-(int(str[i])-48);
    }
   cout<<sum;
    }
   else
    cout<<"invalid no";
    return 0;
}
