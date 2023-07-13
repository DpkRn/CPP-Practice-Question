 #include<bits/stdc++.h>
 using namespace std;
 bool isFrequencyUniqe(int arr[],int n){
    map<int,int> m;
      
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
//   map<int,bool> freq;
//     for(auto row:m){
//         if(freq[row.second]==true)
//         return false;
//         else
//         freq[row.second]=true;
//     }
//     return true;
set<int> s;
for(auto r:m){
    s.insert(r.second);

}
if(s.size()==m.size())
return true; else return false;

 }
 int main(){
 int n;
 cout<<"Enter size of array:";
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];

 }
 bool ans=isFrequencyUniqe(arr,n);
 cout<<ans;
 return 0;
 }