#include<bits/stdc++.h>
using namespace std;
//DISJOINT BY Size
class disjoint{
   public:
    vector<int> ds;
    vector<int> p;
    
    disjoint(int n){       
        ds.resize(n+1,1);
        p.resize(n+1);
        for(int i=0;i<=n;i++){
            p[i]=i;
        }
    }
    int find(int u){
        if(p[u]==u) return u;
        return p[u]=find(p[u]);
    }
   
    void merge(int u,int v){
        int ulp=find(u);
        int vlp=find(v);
        if(ulp==vlp) return;
        if(ds[ulp]<ds[vlp]) swap(ulp,vlp);
        p[vlp]=ulp;
        ds[ulp]+=ds[vlp];    
    }
};
int main(){
    vector<pair<int,int>> arr={{1,2},{2,3},{4,5},{6,7},{6,3},{7,2}};
    int n=arr.size();
    disjoint g(7);

    g.merge(arr[0].first,arr[0].second);
    g.merge(arr[1].first,arr[1].second);
    g.merge(arr[2].first,arr[2].second);
    g.merge(arr[3].first,arr[3].second);
    g.merge(arr[4].first,arr[4].second);
    g.merge(arr[5].first,arr[5].second);
    g.merge(arr[5].first,arr[5].second);

    int noOfComponents=0;
    for(int i=1;i<=7;i++){
        if(g.p[i]==i) noOfComponents++;
    }
    cout<<"no of components:"<<noOfComponents<<endl;
    for(auto i=1;i<=7;i++){
        cout<<g.ds[g.find(i)]<<" ";
    }
   
    return 0;
}