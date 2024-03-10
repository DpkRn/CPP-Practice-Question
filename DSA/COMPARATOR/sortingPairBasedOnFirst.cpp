#include <bits/stdc++.h>

using namespace std;
bool com(pair<int,int> a,pair<int,int> b){
    return a.first>b.first;   
}

int main()
{
    vector<pair<int,int>> v={{2,4},{3,1},{2,1},{5,6}};
    sort(v.begin(),v.end(),com);
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}