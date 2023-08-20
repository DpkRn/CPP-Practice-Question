 #include<bits/stdc++.h>
 using namespace std;
void solve( vector<int> arr,vector<vector<int>> &ans,vector<int> temp,int i){
    if(i>=arr.size()){
        ans.push_back(temp);
        return;
    }

    temp.push_back(arr[i]);
    solve(arr,ans,temp,i+1);
    temp.pop_back();
     solve(arr,ans,temp,i+1);
}
vector<vector<int>> getComb(vector<int> arr){
   vector<vector<int>> ans;
   vector<int> temp;
   int i=0;
   solve(arr,ans,temp,i);
   return ans;
}

 int main(){
 vector<int> v={2,1,3};
 vector<vector<int>> ans=getComb(v);
 for(vector<int> i:ans){
    if(i.size()==0){
    cout<<"{}"<<endl;
    continue;
    }
    for(int x:i){
        cout<<x<<" ";
    }
    cout<<endl;
 }
 return 0;
 }