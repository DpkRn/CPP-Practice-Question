#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>> room,int r,int c,vector<vector<int>> visited,int n){
    if((r>=0&&r<n)&&(c>=0&&c<n)&&(visited[r][c]==0)&&(room[r][c]==0))
    return true;
    else
    return false;
}

void solve(vector<vector<int>> room,int r,int c,vector<vector<int>> &visited,int &count, int n,string str ){
    if(r==n-1&&c==n-1){
        count=count+1;
        cout<<str;
        cout<<endl;
        return;
    }
    visited[r][c]=1;
    //going down 
   
    
    if(isSafe(room,r+1,c,visited,n)){
       //str+="D";
       solve(room,r+1,c,visited,count,n,str+="D");
    }
    
     if(isSafe(room,r,c+1,visited,n )){
        // str+="R";
       solve(room,r,c+1,visited,count,n, str+="R");
    }
    
     if(isSafe(room,r-1,c,visited,n )){
        //  str+="U";
       solve(room,r-1,c,visited,count,n,str+="U");
    }
    
     if(isSafe(room,r,c-1,visited,n)){
        //  str+="L";
       solve(room,r,c-1,visited,count,n, str+="L");
    }
    visited[r][c]=0;
  //  str.pop_back();
    
}
int getPath(vector<vector<int>> room,int n){
    int count=0;
    string str;
    vector<vector<int>> visited=room;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }
    solve(room,0,0,visited,count,n,str);
   
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
