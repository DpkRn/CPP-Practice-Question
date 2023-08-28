 #include<bits/stdc++.h>
 using namespace std;
 void solve(int ind,int k,int n,vector<int> temp,vector<vector<int>> &ans){

    if(ind>k){
        if(n==0)
        ans.push_back(temp);
        return;
    }

    for(int i=ind;i<10;i++){
        temp.push_back(i);
        cout<<"1";
        solve(i+1,k,n,temp,ans);
        temp.pop_back();
    }
}
vector<vector<int>> combinationSum(int k, int n) {
    vector<vector<int>> ans;
    vector<int> temp;
    int ind=1;
    solve(ind,k,n,temp,ans);
    return ans;
}
 
 int main(){
 vector<vector<int>>ans;
 ans=combinationSum(2,5);
 for(vector<int> r:ans){
    cout<<"[";
    for(int i:r){
        cout<<i<<" ";
    }
    cout<<"] ";
 }
 return 0;
 }