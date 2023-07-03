 #include<bits/stdc++.h>
 using namespace std;
 void solve(vector<int> str,vector<int> output,int index,vector<string> &ans){
    if(index>=str.length()){
        ans.push_back(str);
        return;
    }
    for(int i=index;i<str.size();i++){
        swap(str[index],str[i]);
      //  cout<<str<<" ";
        solve(str,index+1,ans);
        swap(str[index],str[i]);
    }
 }
 vector<vector<int>> getPermutation(vector<int> num){
    
    vector<vector<int>> ans;
    if(num.size()==0)
    return ans;
    vector<int> output;
    int index=0;
    solve(num,output,index,ans);
 }
 int main(){
 vector<int> num={1,2,3};
 vector<vector<int>> ans=getPermutation(num);
 for(vector s:ans){
    for(int n:s){
    cout<<n<<" ";
        }
            cout<<endl;
 }
 return 0;
 }