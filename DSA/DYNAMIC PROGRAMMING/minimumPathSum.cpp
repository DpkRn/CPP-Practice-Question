 /*Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.

 Input: grid = [[1,3,1],[1,5,1],[4,2,1]]
Output: 7
Explanation: Because the path 1 → 3 → 1 → 1 → 1 minimizes the sum.
Example 2:

Input: grid = [[1,2,3],[4,5,6]]
Output: 12
 

Constraints:

m == grid.length
n == grid[i].length
1 <= m, n <= 200
0 <= grid[i][j] <= 200

*/
#include<bits/stdc++.h>
using namespace std;
 //int solve(int m,int n,vector<vector<int>> &grid,vector<vector<int>> &dp){
//     if(m==0&&n==0)
//     return grid[m][n];
//     if(dp[m][n]!=-1)
//     return dp[m][n];
//     int left=INT_MAX,up=INT_MAX;
//     if(n-1>=0)
//      left=grid[m][n]+solve(m,n-1,grid,dp);
//      if(m-1>=0)
//     up=grid[m][n]+solve(m-1,n,grid,dp);
//     return dp[m][n]=min(left,up);
// }
int minSumPath(vector<vector<int>> &grid) {
//     vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),-1));
//    return solve(grid.size()-1,grid[0].size()-1,grid,dp);

    //   int m=grid.size();
    //   int n=grid[0].size();
    //   int dp[m][n];
      
    //   for(int i=0;i<m;i++){
    //       for(int j=0;j<n;j++){
    //         if (i == 0 && j == 0) {
    //           dp[i][j] = grid[0][0];
    //           continue;
    //         }
    //           int left=INT_MAX;
    //           int up=INT_MAX;
    //           if(j-1>=0)
    //           left=grid[i][j]+dp[i][j-1];
    //           if(i-1>=0)
    //           up=grid[i][j]+dp[i-1][j];
    //           dp[i][j]=min(left,up);
    //       }
    //   }
    //   return dp[m-1][n-1];


         int m=grid.size();
         int n=grid[0].size();
         int dp[n];
            for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
            if (i == 0 && j == 0) {
              dp[j] = grid[0][0];
              continue;
            }
              int left=INT_MAX;
              int up=INT_MAX;
              if(j-1>=0)
              left=grid[i][j]+dp[j-1];
              if(i-1>=0)
              up=grid[i][j]+dp[j];
              dp[j]=min(left,up);
          }
      }
      return dp[n-1];


}

int main(){
 vector<vector<int>> mat={{1,3,1},{1,5,1},{4,2,1}};
 cout<<minSumPath(mat);
 return 0;
 }