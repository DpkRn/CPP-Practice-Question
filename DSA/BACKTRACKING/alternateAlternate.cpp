#include <bits/stdc++.h>

using namespace std;
void solve(int i,int j,int flag,vector<int> &arr1,vector<int> &arr2,vector<int> &path,vector<vector<int>> &ans){
   if(i>=arr2.size()||j>=arr2.size())
   return;
    if(flag==true){
        if(!path.empty()){
            ans.push_back(path);
        }
        if(path.empty()||arr1[i]>path.back())
            {
              path.push_back(arr1[i]);
              solve(i+1,j,false,arr1,arr2,path,ans);
             
            }
           
            solve(i+1,j,true,arr1,arr2,path,ans);
    }
    else
        if(arr2[j]>path.back()){
            path.push_back(arr2[j]);
            solve(i,j+1,true,arr1,arr2,path,ans);
           
        }
        
        solve(i,j+1,false,arr1,arr2,path,ans);
       
    
}

int main()
{
    vector<int> arr1={10,15,25};
    vector<int> arr2={1,5,20,30};
    
    vector<vector<int>> result;
   
   for(int i=0;i<arr1.size();i++){
    vector<vector<int>> ans;
     vector<int> path;
    solve(i,0,true,arr1,arr2,path,ans);
    result.insert(result.end(),ans.begin(),ans.end());
   }
    
    for(auto row:result){
        for(auto ele:row)
            cout<<ele<<" ";
            cout<<endl;
        
    }
}
