// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(string str,string currentResult,vector<string> &ans,int index){
    if(index>=str.length()){
        ans.push_back(currentResult);
        return;
    }
     
    solve(str,currentResult,ans,index+1);
    currentResult=currentResult+str[index];
    solve(str,currentResult,ans,index+1);
   
}
vector<string> getSubset(string str){
    vector<string> ans;
    string currentResult;
    solve(str,"",ans,0);
    return ans;
}
int main() {
   string str="abc";
   vector<string> res=getSubset(str);
   for(string ans:res)
   cout<<ans<<endl;
    return 0;
}