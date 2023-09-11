/*Given a positive integer N, return the Nth row of pascal's triangle.
Pascal's triangle is a triangular array of the binomial coefficients formed by summing up the elements of previous row.

Example :
1
1 1
1 2 1
1 3 3 1
For N = 3, return 3rd row i.e 1 2 1

Example 1:

Input:
N = 4
Output: 1 3 3 1
Explanation: 4th row of pascal's triangle
is 1 3 3 1.
Example 2:

Input:
N = 5
Output: 1 4 6 4 1
Explanation: 5th row of pascal's triangle
is 1 4 6 4 1.*/
 #include<bits/stdc++.h>
    using namespace std;
typedef long long int ll;

/*
  const int mod=(int)(1e9+7);
    vector<ll> nthRowOfPascalTriangle(int n) {
         vector<vector<ll>> dp(n,vector<ll> (n));
        
      dp[0][0]=1;
       
         dp[0].resize(1);
        for(int i=1;i<n;i++){
            dp[i].resize(i+1);
            for(int j=0;j<=i;j++){
               int a=0,b=0;
                if(j!=0)
                    a=dp[i-1][j-1];
                if(i!=j)
                    b=dp[i-1][j];
              dp[i][j]=(a+b)%mod;  
               
            }  
        }
        return dp[n-1];
    }
*/

 const int mod=(int)(1e9+7);
    vector<ll> nthRowOfPascalTriangle(int n) {
       vector<ll> temp(n,1);
        temp[0]=1;
        for(int i=0;i<n;i++){
             vector<ll> dp(n,1);
             dp[0]=1;
             for(int j=1;j<=i;j++){
               int b=0;
               if(i!=j)   b=temp[j];
               dp[j]=((temp[j-1]%mod)+(b%mod))%mod;  
            }  
            temp=dp;
        }
        return temp;
    }

   
    int main(){
    vector<ll> ans=nthRowOfPascalTriangle(5);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
    }