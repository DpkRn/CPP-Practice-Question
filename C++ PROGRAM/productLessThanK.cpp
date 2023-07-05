
//Brute force method
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> getSubArrayProductLessThanK(vector<int> arr,int k){
    vector<vector<int>> ans;
for(int i=0;i<arr.size();i++){
    for(int j=i;j<arr.size();j++){
        vector<int> temp={};
        int prod=1;
       
        for(int k=i;k<j+1;k++){
           
         temp.push_back(arr[k]);
         prod*=arr[k];
         
        }
     
        if(prod<=k)
       ans.push_back(temp);
      
    }
   
   
}
 return ans;

}
int main(){
vector<int> arr{1,2,3,4};
cout<<"Enter Product:";
int k;
cin>>k;
vector<vector<int>> ans=getSubArrayProductLessThanK(arr,k);
for(vector<int> v:ans){
    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
    }
    cout<<endl;
}
return 0;
}