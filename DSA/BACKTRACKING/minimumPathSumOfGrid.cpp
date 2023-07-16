 #include<bits/stdc++.h>
 using namespace std;
 string changeString(vector<int> path){
    string temp=to_string(path[0]);;
    for(int i=1;i<path.size();i++){
      temp=temp+"->"+to_string(path[i]);
    }
    return temp;
 }

bool isSafe(vector<vector<int>> visited,int r,int c,int rsize,int csize){
    if((r>=0&&r<rsize)&&(c>=0&&c<csize)&&visited[r][c]==0)
    return true;
    else
    return false;
}
void solve(vector<vector<int>> grid,int r,int c,int rsize,int csize, vector<vector<int>> &visited,vector<int> &path,vector<string> &ans){
if(r==rsize-1&&c==csize-1){
path.push_back(grid[r][c]);
string str=changeString(path);
path.pop_back();
ans.push_back(str);
}
visited[r][c]=1;
path.push_back(grid[r][c]);
//cout<<grid[r][c];
if(isSafe(visited,r+1,c, rsize,csize)){
    
   solve(grid,r+1,c,rsize,csize,visited,path,ans);
  
}

if(isSafe(visited, r,c+1,rsize,csize)){
   
   solve(grid,r,c+1,rsize,csize,visited,path,ans);
  
}

if(isSafe(visited, r, c-1,rsize,csize)){
  
   solve(grid,r,c-1,rsize,csize,visited,path,ans);
  

}
if(isSafe(visited, r-1, c, rsize, csize)){
  
   solve(grid,r-1,c,rsize,csize,visited,path,ans);
  
}
path.pop_back();
visited[r][c]=0;
}

vector<string> getMinimumPath(vector<vector<int>> grid,int rsize,int csize){
   
   vector<string> ans; 
   
   vector<int> path;
   
   vector<vector<int>> visited(rsize,vector<int> (csize,0));

   solve(grid,0,0,rsize,csize,visited,path,ans);
   
   return ans;

}


 int main(){
 cout<<"enter row:";
 int r,c;
 cin>>r;
 cout<<"enter column:"<<endl;
 cin>>c;

 vector<vector<int>> grid;
 for(int i=0;i<r;i++){
    vector<int> temp;
    for(int j=0;j<c;j++){
        int data;
        cin>>data;
        temp.push_back(data);
    }
    grid.push_back(temp);
 }

 for(vector<int> row:grid){
    for(int d:row){
        cout<<d<<" ";
    }
    cout<<endl;
 }

 vector<string> ans=getMinimumPath(grid,r,c);

if(!ans.empty()){
 cout<<"Path that can be Traverse:"<<endl;
for(string data:ans){
cout<<data<<endl;}

}
else 
cout<<"empty";



 return 0;
 }
 // 1 3 1 1 5 1 4 2 1