 #include<bits/stdc++.h>
 using namespace std;
 vector<vector<int>> makeGraph(int n,vector<vector<int>> arr){
    vector<vector<int>> adj(n+1,vector<int>(n+1,0));
    for(auto node:arr ){
        adj[node[0]][node[1]]=1;
        adj[node[1]][node[0]]=1;
    }
    return adj;
 }
 //undirected graph
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
    for(auto row: adj){
        for(auto node:row)
        cout<<node<<" ";
        cout<<endl;
    }
 
 return 0;
 }