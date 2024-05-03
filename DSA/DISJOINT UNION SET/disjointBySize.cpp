#include<bits/stdc++.h>
using namespace std;
//DISJOINT BY Size
class disjoint{
   public:
    vector<int> size;
    vector<int> parent;
    
    disjoint(int n){       
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
};
int main(){
    vector<pair<int,int>> arr={{1,2},{2,3},{4,5},{6,7},{6,3},{7,2}};
    int n=arr.size();
    disjoint g(7);

    g.unionBySize(arr[0].first,arr[0].second);
    g.unionBySize(arr[1].first,arr[1].second);
    g.unionBySize(arr[2].first,arr[2].second);
    g.unionBySize(arr[3].first,arr[3].second);
    g.unionBySize(arr[4].first,arr[4].second);
    g.unionBySize(arr[5].first,arr[5].second);
    g.unionBySize(arr[5].first,arr[5].second);

    int noOfComponents=0;
    for(int i=1;i<=7;i++){
        if(g.parent[i]==i) noOfComponents++;
    }
    cout<<"no of components:"<<noOfComponents<<endl;
    for(auto it:g.parent) cout<<it<<" ";
   
    return 0;
}