/*
Warm-up Question:

Given an array of N numbers, which can range from (-10^7 to +10^7). The numbers can have upto 4 digits after the decimal point. The task is to take integral values of these N numbers. When you are taking integral values, you need to make sure you take ceil or floor of A[i]. You have to select in such a way that the sum of the selected numbers gives you a sum 0.

Note: It is guaranteed that the sum can always be made 0. In case of multiple answers, print any.

Input: 4

4.566 1.243-2434-34

Output 41-2-3
*/
#include<bits/stdc++.h>

using namespace std;
void getSum(vector<double> &arr,int n,int sum,vector<int> temp,vector<vector<int>> &ans){
    if(n<0){
        if(sum==0)
        ans.push_back(temp);
        return;
    };
        temp.push_back(floor(arr[n]));
        getSum(arr,n-1,sum+floor(arr[n]),temp,ans);
        temp.pop_back();
        temp.push_back(ceil(arr[n]));
        getSum(arr,n-1,sum+ceil(arr[n]),temp,ans);
        temp.pop_back();
    
}
int main()
{
    vector<double> arr={4.266,1.243,-2.343,-3.4};
    vector<vector<int>> ans;
    vector<int> temp={};
    int sum=0;
    getSum(arr,arr.size()-1,sum,temp,ans);
    for(auto ele:ans){
        for(auto x:ele)
        cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}

/*
another approach in o(n)

for(int i=0;i<n;i++){
    sum=sum+ceil(arr[i]);
    ans[i]=ceil[i];
}
for(int i=0;i<sum;i++){
    ans[i]=floor(arr[i]);
}

return ans;
*/