#include<bits/stdc++.h>
using namespace std;
bool letter[26]={0};
/*
void solve(string s,int k){
    int n=s.size();
   long long dp[n];
   dp[0]=1;
   for(int i=1;i<n;i++){
    if(letter[s[i]-97]==0){
        dp[i]=0; continue;
    }else{
        dp[i]=dp[i-1]+1;
    }
   }
   long long ans=0;
   for(int i=0;i<n;i++) ans+=dp[i];
   cout<<ans;
}
*/

void solve(string s,int k){
    int n=s.size();
   long long cnt=0;
   long long sum=0;
   for(int i=0;i<n;i++){
    if(letter[s[i]-'a']==0){
        sum=sum+(cnt*(cnt+1))/2;
        cnt=0;

    }else{
        cnt++;
    }
   }
   sum=sum+(cnt*(cnt+1ll))/2;
   cout<<sum<<'\n';
}
int main(){
    int n, k;
    cin>>n>>k;
    string s;
   cin>>s;
   while(k--){
    char c;
    cin>>c;
    letter[c-'a']=1;
   }
   

solve(s,k);
return 0;
}