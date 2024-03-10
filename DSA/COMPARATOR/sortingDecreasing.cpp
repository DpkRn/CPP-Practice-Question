#include <bits/stdc++.h>
using namespace std;
inline static bool com(int a,int b){
   return a>b;   
}

int main()
{
    vector<int> v={2,5,1,6,3,5};
    sort(v.begin(),v.end(),com);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}