#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>> room,int r,int c,vector<vector<int>> visited,int n){
    if((r>=0&&r<n)&&(c>=0&&c<n)&&visited[r][c]==0&&room[r][c]==0)
    return true;
    else
    return false;
}

void solve(vector<vector<int>> room,int r,int c,vector<vector<int>> &visited,int &count, int n ){
    if(r==n-1&&c==n-1){
        count++;
        return;
    }
    visited[r][c]=1;
    //going down 
    int x,y;
    x=r+1;
    y=c;
    if(isSafe(room,r,c,visited,n)){
       solve(room,r+1,c,visited,c,n);
    }
     x=r;
    y=c+1;
     if(isSafe(room,r,c+1,visited,n)){
       solve(room,r,c+1,visited,c,n);
    }
     x=r-1;
    y=c;
     if(isSafe(room,r-1,c,visited,n)){
       solve(room,r-1,c,visited,c,n);
    }
     x=r;
    y=c-1;
     if(isSafe(room,r,c-1,visited,n)){
       solve(room,r,c-1,visited,c,n);
    }
    visited[r][c]=0;
    
}
int getPath(vector<vector<int>> room,int n){
    int count=0;
    vector<vector<int>> visited;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }
    solve(room,0,0,visited,count,n);
    return count;
}

int main() {
vector<vector<int>> room;
int n;
cout<<"Enter size:";
cin>>n;
for(int i=0;i<n;i++){
    vector<int> temp;
    for(int j=0;j<n;j++){
        int data;
        cin>>data;
        temp.push_back(data);
    }
    room.push_back(temp);
}
cout<<"Your Matrix is:"<<endl;
for(auto row:room){
    for(int i:row){
        cout<<i<<" ";
    }
    cout<<endl;
}

int ans=getPath(room,n);
cout<<"no of path:"<<ans;
	return 0;
}
