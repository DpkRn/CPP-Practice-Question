/*
You are given a triangular array/list 'TRIANGLE'. Your task is to return the minimum path sum to reach from the top to the bottom row.
The triangle array will have N rows and the i-th row, where 0 &lt;= i  &lt; N will have i + 1 elements.
You can move only to the adjacent number of row below each step. For example, if you are at index j in row i, then you can move to i or i + 1 index in row j + 1 in each step.
If the array given is 'TRIANGLE' = [[1], [2,3], [3,6,7], [8,9,6,1]] the triangle array will look like:

1
2,3
3,6,7
8,9,6,10

For the given triangle array the minimum sum path would be 1->2->3->8. Hence the answer would be 14.
*/

#include <bits/stdc++.h> 
using namespace std;
int solve(vector<vector<int>>& triangle,int i,int j, int n,vector<vector<int>> &dp){
    if(i==n)
		return triangle[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
		int l=triangle[i][j]+solve(triangle,i+1,j,n,dp);
		int r=triangle[i][j]+solve(triangle,i+1,j+1,n,dp);
         return dp[i][j]=min(l,r);
}
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// vector<vector<int>> dp(n,vector<int> (n,-1));
	// return solve(triangle,0,0,n-1,dp);

	int dp[n][n];
	for(int j=0;j<n;j++){
		dp[n-1][j]=triangle[n-1][j];
	}
	int minimum=INT_MAX;
	for(int i=n-2;i>=0;i--){
		
		for(int j=0;j<=i;j++){
           dp[i][j]=triangle[i][j]+dp[i+1][j];
		   dp[i][j]=min(dp[i][j],triangle[i][j]+dp[i+1][j+1]);
		}
		

	}

    return dp[0][0];
}
int main(){
        vector<vector<int>> triangle;
        for(int i=0;i<4;i++){
            vector<int> temp;
            for(int j=0;j<=i;j++){
                int x;
                cin>>x;
                temp[j]=x;;
            }
            triangle.push_back(temp);
        }
    
    int sum=minimumPathSum(triangle,3);
    cout<<sum;
    return 0;
}