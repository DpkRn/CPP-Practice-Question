 #include<bits/stdc++.h>
 using namespace std;
 void print(vector<vector<int>> adj){
    for(auto i=1;i<adj.size();i++){
        cout<<i<<"->";
        for(auto node:adj[i])
        cout<<node<<" ";
        cout<<endl;
    }
 }
 int main(){
 cout<<"enter vertex and edge:";
 int n,e;
 cin>>n>>e;
 vector<vector<int>> adj(n+1);
 for(int i=0;i<e;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
   }
 print(adj);
 return 0;
 }