//find the sum of all subset of number of elements
#include<bits/stdc++.h>
using namespace std;
int findSum(vector<int> arr){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if((i&(1<<j))!=0)
            sum+=arr[j];
        }
    }
    return sum;
}
 int main(){
   vector<int> arr={1,2,3};
   int sum=findSum(arr);
   cout<<sum;
   return 0;
 }