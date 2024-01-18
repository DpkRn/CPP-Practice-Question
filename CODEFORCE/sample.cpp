#include<bits/stdc++.h>
 #define ll long long
 #define v1d vector<int>
 using namespace std;
 void solve(){
  
    
 }
 int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n,q;
    cin>>n>>q;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)  cin>>arr[i];
    
    for(ll i=0;i<q;i++){
        ll s,d,k;
        cin>>s>>d>>k;
        ll sum=0;
        ll ind=0;
        ll k1=1;
 
        while(k1<=k){
            ind=(s)+d*(k1-1); 
            sum+=k1*arr[ind-1];
            k1++;
        }
      cout<<sum<<endl;
    }
    }
 return 0;
 }