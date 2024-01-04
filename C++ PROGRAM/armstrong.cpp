#include <iostream>
#include<cmath>

using namespace std;
int fun(int n,int k){
    if(n==0) return 0;
    int d=n%10;
    int temp=pow(d,k);
    int ans=fun(n/10,k);
    int sum=ans+temp;
    return sum;
}

int main()
{
   cout<<fun(153,3);
    return 0;
}
