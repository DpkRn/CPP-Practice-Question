 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 cout<<"Enter no of vertex and edge:";
 int v,e;
 cin>>v>>e;
 //for 1-based indexing
 vector<vector<int>> adj(v+1,vector<int>(v+1,0));
 for(int i=0;i<e;i++){
    int u,v;
    cin>>u>>v;
    adj[u][v]=1;
    adj[v][u]=1;
 }

 for(auto row:adj){
    for(auto x:row)
     cout<<x<<" ";
     cout<<endl;
 }
 return 0;
 }