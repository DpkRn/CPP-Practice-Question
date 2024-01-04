//Find element occuring once when all other are present thrice
//[1,10,1,1]  ans=10;
#include<bits/stdc++.h>
using namespace std;
int getElement(int arr[],int n){
   //max bit get would be 32 acc to range 1e9
   int ele=0;
   for(int i=0;i<32;i++){
    int cnt=0;
    for(int j=0;j<n;j++){
        if((arr[j]>>i)&1==1)
        cnt++;
    }
    if(cnt%3==1)
    ele+=(1<<i);
   }
   return ele;
}

int main(){
    int arr[]={1,10,1,1};
    cout<<getElement(arr,4);
    return 0;
}