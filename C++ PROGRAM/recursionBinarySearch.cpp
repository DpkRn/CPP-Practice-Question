#include <iostream>
using namespace std;
bool isAvailable(int arr[],int n,int start,int end){
  if(start>end)
  return false;
  int mid=(start+end)/2;
  
 if(arr[mid]==n)
 return true;
 else
  {  bool ans;
      if(n<arr[mid])
       
     ans=isAvailable(arr,n,start,mid-1);
     else
     ans= isAvailable(arr,n,mid+1,end);
     cout<<start<<" "<<end<<" "<<ans<<endl;
     
     return ans;
}}


int main() {
   
  int arr[]={2,4,6,9,11,13};
 
 int start=0,end=5;
 int n=13;
  bool ans=isAvailable(arr,n,start,end);
  if(ans)
  cout<<"available";
  else
  cout<<"not available";

    return 0;
}