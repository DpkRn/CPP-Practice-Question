 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 vector<int> v={1,2,3,2,3,3,1,1};
 map<int,int> m;
 for(auto x:v){
    m[x]++;
 }

 for(auto x:m){
    if(x.second%2==1)
    cout<<x.first<<endl;
 }
 return 0;
 }