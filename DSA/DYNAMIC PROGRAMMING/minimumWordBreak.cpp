#include<bits/stdc++.h>
using namespace std;
int solve(string str,vector<string> dict){
    int n=str.size();
    unordered_set<string> st;
    for(auto it:dict) st.insert(it);
    vector<int> dp(n+1,1e9);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            if(st.find(str.substr(j,i-j))!=st.end()){
                dp[i]=min(dp[i],1+dp[j]);
            }
        }
    }
    return dp[n]==1e9?-1:dp[n];
}

int main(){
    vector<string> dict={"C", "Ma", "Ca", "tM", "a", "C", "Dog", "og", "Do"};
    string str="CatMat";
    int ans= solve(str,dict);
    cout<<ans;
return 0;
}