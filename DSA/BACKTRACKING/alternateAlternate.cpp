 //ans should be in sorted order
  #include<bits/stdc++.h>
 using namespace std;
void solve( int l,int r,int t,vector<int>&nums1,vector<int>&nums2,vector<int> &temp){
    if(l>=nums1.size()||r>=nums2.size()){
         for(int x:temp)
         cout<<x<<" ";
         cout<<endl;
      
    return;
    }
    if(t==1){
        if(l==0||(r!=-1&&nums1[l]>nums2[r])){
        temp.push_back(nums1[l]);
        solve(l,r+1,2,nums1,nums2,temp); 
        temp.pop_back();
        }
        else 
        solve(l+1,r,1,nums1,nums2,temp); 
    }else{
        if(nums2[r]>nums1[l]){
        temp.push_back(nums2[r]);
        solve(l+1,r,1,nums1,nums2,temp); 
        temp.pop_back();}
        else
        solve(l,r+1,2,nums1,nums2,temp); 
    }
}

 int main(){
 vector<int> nums1={1,3,5};
 vector<int> nums2={2,3,4};
 
 vector<int> temp;
 
 solve(0,-1,1,nums1,nums2,temp);   
    // for(int x:ans){
    //     cout<<x<<endl;
    // }  
 return 0;
 }