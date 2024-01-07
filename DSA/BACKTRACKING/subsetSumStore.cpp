 //ans should be in sorted order
  #include<bits/stdc++.h>
 using namespace std;
void solve( int i,int sum,vector<int>&ans,vector<int>&nums){
    if(i>=nums.size()){
        ans.push_back(sum);
        return;
    }
    solve(i+1,sum,ans,nums);   
    solve(i+1,sum+nums[i],ans,nums);
}

 int main(){
 vector<int> nums={2,1,3};
 sort(nums.begin(),nums.end(),greater<int>()); //if i am sorting in decreasing order here it will take less time and as we know it will start store at after reaching at last index
 vector<int> ans;
 solve(0,0,ans,nums);   
    for(int x:ans){
        cout<<x<<endl;
    }  
 return 0;
 }