 #include<bits/stdc++.h>
 using namespace std;
// int f( vector<int> &arr,int n,int tar,vector<vector<int>> &dp){
//     if(n==0){
//         if(tar%arr[0]==0) return 1;
//         else
//         return 0; 
//     }
//     if(dp[n][tar]!=-1) return dp[n][tar];
//     int notpick=f(arr,n-1,tar,dp);
//    int pick=0;
//    if(tar-arr[n]>=0)
//     pick=f(arr,n,tar-arr[n],dp);
//     return dp[n][tar]=pick+notpick;
// }
int countWaysToMakeChange(vector<int> denominations, int n, int value)
{  
    // vector<vector<int>> dp(n,vector<int>(value+1,-1));
//     return f(denominations,n-1,value,dp);

    
     vector<vector<long>> dp(n,vector<long>(value+1,0));
     for(int i=0;i<=value;i++) 
     if(i%denominations[0]==0) dp[0][i]=1;

     for(int i=1;i<n;i++){
         for(int j=0;j<=value;j++){
             long notpick=dp[i-1][j];
             long pick=0;
             if(j-denominations[i]>=0)
              pick=dp[i][j-denominations[i]];
               dp[i][j]=pick+notpick;
         }
     }
     return dp[n-1][value];
}
 int main(){
  vector<int> denominations={1,2,3};
  cout<<countWaysToMakeChange(denominations,3,4);
 return 0;
 }