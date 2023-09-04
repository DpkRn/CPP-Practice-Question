  #include<bits/stdc++.h>
  using namespace std;
  
  int main(){
  int t;
  cin>>t;
  while(t--){
    string seq;
    cin>>seq;
    
    seq="$"+seq;
    int n=seq.size();
   long long dp[n];
   dp[0]=1;
   dp[1]=1;

   const int mod=(int)(1e9+7);
   for(int i=2;i<n;i++){
       dp[i]=0;
       if(seq[i]!='0')
       dp[i]=dp[i-1];
       int num=(int)(seq[i-1]-'0')*10+(int)(seq[i]-'0');
       if(num>=10&&num<=26)
           dp[i]+=dp[i-2];
           dp[i]=dp[i]%mod;
       }
       cout<<dp[n-1];
  }
  return 0;
  }