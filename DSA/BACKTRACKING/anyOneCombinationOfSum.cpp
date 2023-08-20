  #include<bits/stdc++.h>
 using namespace std;

bool solve( vector<int> arr,vector<vector<int>> &ans,vector<int> temp,int i,int sum,int target){
   
    if(sum>target)
    return false;
    if(i>=arr.size()||sum==target){
        if(sum==target)
        {
        ans.push_back(temp);
        return true;
        }
        return false;
    }

    temp.push_back(arr[i]);
    sum+=arr[i];
   
   if( solve(arr,ans,temp,i+1,sum,target)==true){
   return true;
   }
    temp.pop_back();
    sum-=arr[i];
    
     if(solve(arr,ans,temp,i+1,sum,target)==true){
     return true;
     }
     return false;


    
}
vector<vector<int>> getComb(vector<int> arr,int target){
   vector<vector<int>> ans;
   vector<int> temp;
   int i=0;
   int sum=0;
   solve(arr,ans,temp,i,sum,target);
   return ans;
}

 int main(){
 vector<int> v={1,2,3};
 int target=3;
 vector<vector<int>> ans=getComb(v,target);
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



  /*bool flag=false;
void solve( vector<int> arr,vector<vector<int>> &ans,vector<int> temp,int i,int sum,int target){
    if(flag==false){
    if(sum>target)
    return;
    if(i>=arr.size()){
        if(sum==target)
        {
        ans.push_back(temp);
        flag=true;
        }
        return;
    }

    temp.push_back(arr[i]);
    sum+=arr[i];
    if(flag==false)
    solve(arr,ans,temp,i+1,sum,target);
    temp.pop_back();
    sum-=arr[i];
     solve(arr,ans,temp,i+1,sum,target);

    }
}
vector<vector<int>> getComb(vector<int> arr,int target){
   vector<vector<int>> ans;
   vector<int> temp;
   int i=0;
   int sum=0;
   solve(arr,ans,temp,i,sum,target);
   return ans;
}

 int main(){
 vector<int> v={1,2,3};
 int target=3;
 vector<vector<int>> ans=getComb(v,target);
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
 */