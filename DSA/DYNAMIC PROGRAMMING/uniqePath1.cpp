 /*
 There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.

Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.

The test cases are generated so that the answer will be less than or equal to 2 * 109.

Input: m = 3, n = 7
Output: 28
Example 2:

Input: m = 3, n = 2
Output: 3
Explanation: From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Down -> Down
2. Down -> Down -> Right
3. Down -> Right -> Down
 */
 #include<bits/stdc++.h>
  using namespace std;

  /* O(mxn) O(mxn+max(m,n))
 int f(int m,int n, vector<vector<int>> &dp){
        if(m<0||n<0)
       return 0;
    if(m==0&&n==0)
    return 1;
    if(dp[m][n]!=-1)
    return dp[m][n];

     int left=f(m,n-1,dp);
     int right=f(m-1,n,dp);
     return dp[m][n]=left+right;
 }
 int uniquePaths(int m, int n) {
    vector<vector<int>> dp(m,vector<int> (n,-1));
    return f(m-1,n-1,dp);
    }

 */

/* O(mxn) O(mxn)
 int uniquePaths(int m, int n) {
    int  dp[m][n];
   
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0&&j==0)
            {
                dp[i][j]=1;
                continue;
            }
            int l=0,u=0;
            if(j-1>=0)
            l=dp[i][j-1];
            if(i-1>=0)
            u=dp[i-1][j];
            dp[i][j]=l+u;
        }
    }
    return dp[m-1][n-1];
    }
 
 */

/**/
 int uniquePaths(int m, int n) {
    int  dp[n];
    dp[0]=1;
    int l=0,u=0;
    for(int i=0;i<m;i++){
        for(int j=1;j<n;j++){
            
             int l=0,u=0;
            if(j-1>=0)
            l=dp[j-1];
            if(i-1>=0)
            u=dp[j];
            dp[j]=l+u;
            
        }
    }
    return dp[n-1];
    }

 int main(){
 cout<<uniquePaths(1,1);
 return 0;
 }