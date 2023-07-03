#include<iostream>
using namespace std;
int isprime(int n)
{
    int count=0;

    for(int i=2;i<=n/2;i++)
       {
        if(n%i==0)
        count++;
       }

        if(count>0)
         return 0;
        else
        return 1;

}
int main()
{
    int snum,upnum;
    cout<<"enter starting no:";
    cin>>snum;
    cout<<"enter upto have to find:";
    cin>>upnum;
    int c=0;
    while(c<upnum)
    {
        if(isprime(snum))
            {cout<<snum<<endl;
            snum++;
            c++;}
            else
            snum++;

   }
    return 0;
}
