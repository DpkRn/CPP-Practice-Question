#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int count(int n,int ind,int val,int sum){
    if(ind>=n){   
        if(sum==val)
        return 1;
        else return 0;
    }
    int ans=0;
    for(int i=0;i<=val;i++){     
        ans=ans+count(n,ind+1,val,sum+i);
    }
    return ans;
}

int main()
{
    int val=2,n=5;
    cout<<count(n,0,val,0)<<endl;
    return 0;
}
