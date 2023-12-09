#include<bits/stdc++.h>
#include<iostream>

void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp={};
    int l=low,r=,mid+1
    while(l<=mid&&r<=high){
        if(arr[l]<arr[r]){
            temp.push_back(arr[l++]);
        }
        else{
            temp.push_back(arr[r++]);
        }
    }
    while(l<=mid) temp.push_back(arr[l++]);
    while(r<=high) temp.push_back(arr[r++]);

    for(int i=0;i<temp.size();i++){
        arr[low++]=temp[i];
    }
}
void mergeSort(vector<int> &arr,int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    vector<int> arr={5,2,3,1,4};
    mergeSort(arr,0,arr.size()-1);
    for(int x:v)
    cout<<x<<" ";
    return 0;
}