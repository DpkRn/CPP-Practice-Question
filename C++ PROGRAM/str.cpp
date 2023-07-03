#include<iostream>

using namespace std;

int factorial(int x)
{  int res=1;
    for(int i=1;i<=x;i++)
        res=res*i;
    return res;
}

int isstrong(int x)
{  int sum=0;
   int temp=x;
    while(x>0)
    {
     int d=x%10;
        int fact=fact(d);
        sum=sum+fact;
        x=x/10;
    }
    if(sum==temp)
        return 1;
    else
        return 0;
}


int main()
{
    cout<<"enter no:";
    int num;
    cin>>num;
    int arr[num];
    int c=0;
    for(int i=1;i<=num;i++)
    {
        if(isstrong(i))
            {
                arr[c]=i;
                c++;
            }
    }
    for(int i=0;i<c;i++)
        cout<<arr[i]<<endl;
    return 0;
}
