 #include<bits/stdc++.h>
 using namespace std;
 vector<int> freq(vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int val=arr[i]%n;
        arr[val]=arr[val]+n;
    }

    for(int i=0;i<n;i++){
        arr[i]=arr[i]/n;
    }
    return arr;

 }
 int main(){
    //0<arr[i]<N
 vector<int> arr={2,3,3,4,2};
int n=arr.size();
 vector<int> f=freq(arr);
 for(int i=0;i<n;i++){
   if(f[i]>1)
    cout<<"frequency of "<<i<<" is "<<f[i]<<endl;
 }

 return 0;
 }