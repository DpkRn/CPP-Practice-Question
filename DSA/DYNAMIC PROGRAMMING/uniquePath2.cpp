 #include<bits/stdc++.h>
 using namespace std;

 int solve(int n,int m, vector<vector<int>> &mat,vector<vector<int>> &dp){
   if(n<0||m<0||mat[n][m]==-1)
   return 0;
   if(m==0&&n==0)
   return 1;
   if(dp[n][m]!=-1)
   return dp[n][m];
  
    int l=solve(n,m-1,mat,dp);
  
    int r=solve(n-1,m,mat,dp);
   return dp[n][m]=(l+r)%(int)(1e9+7);
}

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    vector<vector<int>> dp(n,vector<int> (m,-1));
    return solve(n-1,m-1,mat,dp);
}



/*
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    int dp[n][m];
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0&&j==0)
            {
                 dp[0][0]=1;
                 continue;
            }
            int left=0,up=0;
            if(j-1>=0&&mat[i][j]!=-1)
            left=dp[i][j-1];
            if(i-1>=0&&mat[i][j]!=-1)
            up=dp[i-1][j];
            dp[i][j]=(left+up)%(int)(1e9+7);

        }
    }
    return dp[n-1][m-1];
}

*/

// int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
//     int dp[m];
   
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(i==0&&j==0)
//             {
//                  dp[0]=1;
//                  continue;
//             }
//             int left=0,up=0;
//             if(j-1>=0&&mat[i][j]!=-1)
//             left=dp[j-1];
//             if(i-1>=0&&mat[i][j]!=-1)
//             up=dp[j];
//             dp[j]=(left+up)%(int)(1e9+7);

//         }
//     }
//     return dp[m-1];
// }

 int main(){
 vector<vector<int>> mat={{0,0,0},{0,0,0},{0,0,0}};
 cout<<mazeObstacles(mat[0].size(),mat.size(),mat);
 return 0;
 }