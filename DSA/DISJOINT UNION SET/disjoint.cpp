#include<bits/stdc++.h>
using namespace std;
//DISJOINT BY RANK
class disjoint{
    vector<int> rank;
    vector<int> size;
    vector<int> parent;
    public:
    disjoint(int n){
        rank.resize(n+1,0);
        size.resize(n+1,1);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }
    int findParent(int u){
        if(parent[u]==u) return u;
        return parent[u]=findParent(parent[u]);
    }
    void unionByRank(int u,int v){
        int ulp=findParent(u);
        int vlp=findParent(v);
        if(ulp==vlp) return;
        if(rank[ulp]<rank[vlp]){
            parent[ulp]=vlp;
        }else if(rank[ulp]>rank[vlp]){
            parent[vlp]=ulp;    
        }else{
            parent[vlp]=ulp;
            rank[ulp]++;
        }
    }
    void unionBySize(int u,int v){
        int ulp=findParent(u);
        int vlp=findParent(v);
        if(ulp==vlp) return;
        if(size[ulp]<size[vlp]){
            parent[ulp]=vlp;
            size[vlp]+=size[ulp];
        }else{
            parent[vlp]=ulp;
            size[ulp]+=size[vlp];
        }
    }

    bool isComponent(int u,int v){
        if(findParent(u)==findParent(v)) return true;
        return false;
    }
    int findSize(int u){
       return size[findParent(u)];
    }
    void showRank(){
        cout<<"------------------"<<endl;
        for(auto it: rank){
            cout<<"|"<<it;
        }
        cout<<endl<<"------------------"<<endl;
    }
    void showParent(){
        cout<<"------------------"<<endl;
        for(auto it: parent){
            cout<<"|"<<it;
        }
        cout<<endl<<"------------------"<<endl;
    }
    
    
};
int main(){
    vector<pair<int,int>> arr={{1,2},{2,3},{4,5},{6,7},{5,6},{3,7}};
    int n=arr.size();
    // disjoint g(7);

    // g.unionByRank(arr[0].first,arr[0].second);
    // g.unionByRank(arr[1].first,arr[1].second);
    // g.unionByRank(arr[2].first,arr[2].second);
    // g.unionByRank(arr[3].first,arr[3].second);
    // g.unionByRank(arr[4].first,arr[4].second);
    // g.unionByRank(arr[5].first,arr[5].second);
    // g.unionByRank(arr[5].first,arr[5].second);
    
    // g.showRank();
    // g.showParent();

    // if(g.isComponent(2,5)){
    //     cout<<"yes"<<endl;
    // }else cout<<"no"<<endl;

    disjoint group(7);
    group.unionBySize(arr[0].first,arr[0].second);
    cout<<group.findSize(7);
    return 0;
}