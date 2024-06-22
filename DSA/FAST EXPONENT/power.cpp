 #include<bits/stdc++.h>
 #define ll long long
 #define mod (int)(1e9+7)
 using namespace std;
//  ll power(int base,int exp){
//     ll res=1;
//     while(exp>0){
//         if(exp&1){
//             res*=base;
//         }
//         exp=exp>>1;
//         base=base*base; 
//     }
//     return res;
//  }
 ll power(int x,int y){
    int res=1;
    x=x%mod;
    while(y>0){
        if(y&1) res*=x;
        y=(y>>1);
        x=(x*x)%mod;
    }
    return res;
}
 int main(){
    int base,exp;
    cin>>base>>exp;
    ll ans=power(base,exp);
    cout<<ans<<endl;
 return 0;
 }