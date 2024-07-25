/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=4;
    vector<vector<int>> edges={{0,1,1},{1,2,1},{1,3,2},{0,3,4},{2,3,5}};

    //using adj
    vector<vector<int>> adj[n];
    for(auto it:edges){
        adj[it[0]].push_back({it[1],it[2]});
        adj[it[1]].push_back({it[0],it[2]});
    }
    
    vector<int> key(n,1e9);
    vector<bool> mst(n,0);
    vector<int> par(n,-1);
    
    key[0]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,0});
    
    int sum=0;
    while(!pq.empty()){
        int u=pq.top().second;
        int wt=pq.top().first;
        sum+=wt;
        pq.pop();
        if(mst[u]==true) { sum-=wt; continue;}
        mst[u]=true;
        
        for(auto it:adj[u]){
            int v=it[0]; int w=it[1];
            if(mst[v]==false&&w<key[v]){
                key[v]=w;
                par[v]=u;
                pq.push({w,v});
            }
        }
    }
    
    
    // for(auto it:par) cout<<it<<" ";
    cout<<sum<<" ";

    return 0;
}