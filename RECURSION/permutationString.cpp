 #include<bits/stdc++.h>
 using namespace std;
 void solve(string str,int index,vector<string> &ans){
    if(index>=str.length()){
        ans.push_back(str);
        return;
    }
    for(int i=index;i<str.length();i++){
        swap(str[index],str[i]);
      //  cout<<str<<" ";
        solve(str,index+1,ans);
        swap(str[index],str[i]);
    }
 }
 vector<string> getPermutation(string str){
    
    vector<string> ans;
    if(str=="")
    return ans;
    int index=0;
    solve(str,index,ans);
 }
 int main(){
 string str="abc";
 vector<string> ans=getPermutation(str);
 for(string s:ans){
    cout<<s<<" ";
 }
 return 0;
 }