 #include<bits/stdc++.h>
 using namespace std;
 int getMaxLength(vector<int> arr){
    int n=arr.size();
    int l=0;int r=0;
    int ans=INT_MIN;
    int maxl=arr[0];
    while(r<n){
        if(arr[r]>=maxl){
           
            maxl=arr[r];
            ans=max(ans,r-l+1);
            
             
        }
        else
        {

            l=r;
            maxl=arr[r];
        }
        r++;
    }
    return ans;
 }
 int main(){
 vector<int> arr{9,10,7,6,41,71};
 int ans=getMaxLength(arr);
 cout<<ans;
 return 0;
 }