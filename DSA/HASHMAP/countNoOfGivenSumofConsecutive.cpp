 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 vector<int> v;
 
 for(int i=0;i<8;i++){
    int n;
    cin>>n;
    v.push_back(n);
 }
 cout<<"enter number:";
 int k;
 cin>>k;
int count=0;
 unordered_map<int,int> mp;
//2 1 5 1 2 1 3 6 
 for(int i=0;i<v.size();i++){
    int sum=sum+v[i];
    count=count+mp[sum-k];
    if(sum==k)
    count++;
    mp[sum]++;

 }

 cout<<count;
 return 0;
 }