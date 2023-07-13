 
 /*You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step*/


 #include<bits/stdc++.h>
 using namespace std;
int solve(int n,int &count,map<int,int> &map){
    if(n<0)
    return 0;
    if(n==0){
   count++;
    return 1;;
}
    if(map[n]>0){
    count+=map[n];
    return map[n];
    }
    
    // int l=solve(n-1,count,map);
    // int r=solve(n-2,count,map);
    // map[n]=l+r;
    // return map[n];
    return map[n]=solve(n-1,count,map)+solve(n-2,count,map);
}

 int climbStairs(int n){
    map<int,int> map;
    int count=0;

    int ans=solve(n,count,map);
    return ans;
 }
 int main(){
 int step;
 cout<<"enter step:";
 cin>>step;
 cout<<"no of ways to climb:"<<climbStairs(step);
 return 0;
 }