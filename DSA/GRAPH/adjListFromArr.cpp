 #include<bits/stdc++.h>
 using namespace std;
 vector<vector<int>> makeGraph(int n,vector<vector<int>> arr){
   
   vector<vector<int>> adj(n+1);
    for(auto node:arr ){
        adj[node[0]].push_back(node[1]);
    }
    return adj;
 }
  void print(vector<vector<int>> adj){
    for(auto i=1;i<adj.size();i++){
        cout<<i<<"->";
        for(auto node:adj[i])
        cout<<node<<" ";
        cout<<endl;
    }
  }
 int main(){
  int n=5; //no of vertex
    vector<vector<int>> arr{ //vertex----vertex
        {1,2},
        {1,3},
        {1,4},
        {2,3},
        {2,4},
        {3,5},
        {4,5}
    };
    vector<vector<int>> adj(n+1,vector<int>(n+1,0));
    adj=makeGraph(n,arr);
    print(adj);
 return 0;
 }