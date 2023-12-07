
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void gapMethod(vector<int> &arr){
    int n=arr.size();
    int gap=n/2+n%2;
    while(gap>0){
        int l=0;
        int r=gap;
        while(r<n){
            if(arr[l]>arr[r]) swap(arr[l],arr[r]);
            l++;r++;
        }
        if(gap==1) break;
        gap=gap/2+gap%2;
    }
}

int main()
{
    vector<int> arr={3,0,1,7,1,9,-3,7,1,0,6,34};
    gapMethod(arr);
    for(auto x:arr) cout<<x<<" ";
    return 0;
}