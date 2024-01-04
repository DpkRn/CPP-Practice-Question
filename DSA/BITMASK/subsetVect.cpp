 
 //find the all subset of number of elements
 #include<bits/stdc++.h>
 using namespace std;
 vector<vector<int>> findSubset(vector<int> &arr){
    int n=arr.size();
    vector<vector<int>> ans;
    for(int i=0;i<(1<<n);i++){  //traversing i->0 to 7 so that it will take 3 bit position to exchange the set bit
        vector<int> temp;
        for(int j=0;j<n;j++){  //traversing each bit by 3 place becausse of array having 3 element
            if(((i>>j)&1)==1){ //some how check jth bit is 1 or not // (i&(1<<j))!=0 will also work
                temp.push_back(arr[j]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
 }
 int main(){
    
    vector<int> arr={1,2,3};
    vector<vector<int>> ans=findSubset(arr);
    for(auto row:ans){
        for(auto ele:row)
        cout<<ele<<" ";
        cout<<endl;
    }
    return 0;
 }
 //[1,2,3]
 //value of i will go 0 to 7
 //j will check each bits of i
 //we will pick only set bit index
 //0 0 0  i.e we will not pic any index                             []
 //0 0 1  /.e we will pick only 0th bit that means 0th element      [1]
 //0 1 0  i.e we will pick only 1th bit that means 1th element      [2]
 //0 1 1  /.e we will pick only 0th,1th bit  means 0,1th element    [1,2]
 //1 0 0  i.e we will pick only 2th bit that means 2th element      [3]
 //1 0 1  /.e we will pick only 2th 0th bit  means 0,2th element    [1,3]
 //1 1 0  i.e we will pick only 1th 2th bit  means 1,2th element    [2,3]
 //1 1 1  /.e we will pick only all th bit   means 0,1,2th element  [1,2,3]
 


   
