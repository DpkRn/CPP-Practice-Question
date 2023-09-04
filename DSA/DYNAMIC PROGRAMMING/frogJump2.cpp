 //https://atcoder.jp/contests/dp/tasks/dp_b
 /*There are 
N stones, numbered 
1,2,…,N. For each 
i (
1≤i≤N), the height of Stone 
i is 
h 
i
​
 .

There is a frog who is initially on Stone 
1. He will repeat the following action some number of times to reach Stone 
N:

If the frog is currently on Stone 
i, jump to one of the following: Stone 
i+1,i+2,…,i+K. Here, a cost of 
∣h 
i
​
 −h 
j
​
 ∣ is incurred, where 
j is the stone to land on.
Find the minimum possible total cost incurred before the frog reaches Stone 
N.

Constraints
All values in input are integers.
2≤N≤10 
5
 
1≤K≤100
1≤h 
i
​
 ≤10 
4
 
*/


/*using vector
 
 #include<bits/stdc++.h>
 using namespace std;
 int solve(vector<int> stone,int ind,int k){
    if(ind==0)
    return 0;
vector<int> steps;

    for(int i=1;i<=k;i++){
      
           if(ind-i>=0){
           
        steps.push_back(solve(stone,ind-i,k)+abs(stone[ind]-stone[ind-i]));
         cout<<i<<" ";
        
           }
    }
    cout<<endl;
    int minV=*min_element(steps.begin(),steps.end());
   
    return minV;
 }
 int minEnergy(vector<int> stone,int k){

    return solve(stone,stone.size()-1,k);
 }
 int main(){
 vector<int> stone={10,20,30,10 };
 // 40, 10, 20, 70, 80, 10, 20, 70, 80, 60 k=4
 //10,10 k=10
 //10, 20, 10 k=1
 //10,20,30,10 k=2;

 cout<<minEnergy(stone,2);
 return 0;
 }

 */

 /*using without extra space

 #include<bits/stdc++.h>
 using namespace std;
 int solve(vector<int> &stone,int ind,int k,vector<int> dp){
    if(ind==0)
    return 0;
    if(dp[ind]!=-1)
    return dp[ind];
    int minSteps=INT_MAX;

    for(int i=1;i<=k;i++){
      
        if(ind-i>=0){
            int energy=solve(stone,ind-i,k,dp)+abs(stone[ind]-stone[ind-i]);
            minSteps=min(minSteps,energy);
        
           }
    }
    
    return dp[ind]=minSteps;
   
 }
 int minEnergy(vector<int> &stone,int k){
     vector<int> dp(stone.size(),-1);
    return solve(stone,stone.size()-1,k,dp);
 }
 int main(){
 vector<int> stone={10,20,30,10 };
 // 40, 10, 20, 70, 80, 10, 20, 70, 80, 60 k=4
 //10,10 k=10
 //10, 20, 10 k=1
 //10,20,30,10 k=2;

 cout<<minEnergy(stone,2);
 return 0;
 }
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
 vector<int> stone={10,20,30,10 };
 // 40, 10, 20, 70, 80, 10, 20, 70, 80, 60 k=4
 //10,10 k=10
 //10, 20, 10 k=1
 //10,20,30,10 k=2;

 int n=stone.size();
 vector<int>dp(n,0);
 dp[0]=0;
 int k=2;
 int i;
 for( i=1;i<n;i++){
    int minEnergy=INT_MAX;
    for(int j=1;j<=k;j++){
        if(i-j>=0)
        minEnergy=dp[i-j]+abs(stone[i]-stone[j]);
    }
    dp[i]=minEnergy;
 }

 cout<<dp[i-1];
 return 0;
}

