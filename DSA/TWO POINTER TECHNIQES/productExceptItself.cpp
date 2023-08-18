 #include <iostream>
#include<bits/stdc++.h>
using namespace std;

 void productExceptSelf(vector<int>& nums) {
       vector<int> ans;
        map<int,int> leftpro;
        int left=1;
        map<int,int> rightpro;
        int right=1;
        int l=0;
        int r=nums.size()-1;
        
        for(int i=0;i<nums.size();i++){
            left=left*nums[l];
            leftpro[l]=left;
            l++;

            right=right*nums[r];
            rightpro[r]=right;
            r--;
            
        }
    
        
        for(int i=0;i<nums.size();i++){
            cout<<leftpro[i]<<" ";
        }
        cout<<endl;
         for(int i=0;i<nums.size();i++){
            cout<<rightpro[i]<<" ";
        }
         ans.push_back(rightpro[1]);
        for(int i=1;i<nums.size()-1;i++)
        ans.push_back(leftpro[i-1]*rightpro[i+1]);
        
        ans.push_back(leftpro[nums.size()-1]);
cout<<endl;
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
        
    }

int main()
{
   vector<int> v={4,5,7,0,1,6};
   productExceptSelf(v);
   

    return 0;
}