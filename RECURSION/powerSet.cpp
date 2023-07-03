 
#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &res,vector<int> arr,vector<int> output,int index){
if(index>=arr.size())
{
    res.push_back(output);
    return;
}
//exclude
solve(res,arr,output,index+1);

//include

output.push_back(arr[index]);
solve(res,arr,output,index+1);

}
vector<vector<int>> getSubsets(vector<int> arr){
    //write code
    vector<vector<int>> res;
    vector<int> output;
  int index=0;
    solve(res,arr,output,index);
}
int main(){
vector<int> arr={1,2,3};
vector<vector<int>> ans=getSubsets(arr);

for (auto x:ans) {
    for (auto y :x )
    cout <<y <<" " ;
    cout<< endl;}

return 0;
}
  
  
  //Brute force approach
//   int main(){
//   int arr[]={18 ,3, 7 ,2 ,4};
//     int i=0;
//     while(i<3){
//     for(int j=0;j<3-i;j++){
//         for(int k=j;k<j+i+1;k++){
//             cout<<arr[k]<<" ";
//         }
//         cout<<endl;
        
//     }
//     i++;
//     }
//   return 0;
//   }