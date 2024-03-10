 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 ll const inf=1e17;
 void solve(){
    int n;
    cin>>n;
    ll dp[n+1][8];
     for(int i=0;i<=n;i++){
        for(int j=0;j<8;j++){
            dp[i][j]=inf;
        }
    }
    dp[0][0]=0;
    

    for(int i=0;i<n;i++){
        int cost;
        string s;
        cin>>cost>>s;
        int string_mask=0;
        for(int pos=0;pos<=2;pos++){
            char c='C'-pos;
            for(auto d:s){
                if(d==c) {
                    string_mask+=(1<<pos);
                    break;
                }
            }
        }
       for(int mask=0;mask<8;mask++){
        dp[i+1][mask]=min(dp[i+1][mask],dp[i][mask]);
        dp[i+1][mask|string_mask]=min(dp[i+1][string_mask|mask],dp[i][mask]+cost);
       }        
    }
    if(dp[n][7]==inf) cout<<-1<<endl;
    else
    cout<<dp[n][7]<<endl;
    
 }


 int main(){
 solve();
 return 0;
 }