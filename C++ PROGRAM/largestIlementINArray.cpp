 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 int arr[5]={1,2,4,3,5};
 int maxi=INT_MIN;
 for(int i=0;i<5;i++){
   maxi=max(maxi,arr[i]);
 }

 cout<<"largest Element="<<maxi;
 
 return 0;
 }