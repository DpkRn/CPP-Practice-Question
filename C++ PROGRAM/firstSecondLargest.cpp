#include <iostream>
#include<bits/stdc++.h>

using namespace std;
vector<int> secondLar(int arr[],int n){
    int maxValue=INT_MIN;
    int firstLargest=INT_MIN;
    
    for(int i=0;i<n;i++){
       if(maxValue<arr[i]){
        firstLargest=i;
        maxValue=arr[i];
       }
    }
    int ans=INT_MIN;
    int secondLargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=maxValue&&arr[i]>secondLargest){
            ans=i;
        }
    }
    return {firstLargest,ans};
}
int main()
{
 int arr[]={2,5,6,7,7,5,7,3,2,6};
 
 vector<int> s=secondLar(arr,10);
 cout<<"first Largest No:"<<arr[s[0]]<<endl;
  cout<<"second Largest No:"<<arr[s[1]];
 

    return 0;
}