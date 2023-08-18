 #include<bits/stdc++.h>
 using namespace std;
void solve(vector<int>&coin,int sum,int ind,int target,int &count,vector<int> temp,vector<vector<int>> &ans){
    if(sum==target)
    {    
        ans.push_back(temp);
        count++;
        return;
    }
    for(int i=0;i<coin.size()&&sum+coin[i]>=target;i++){
     
    
        sum=sum+coin[i];
        temp.push_back(coin[i]);
        solve(coin,sum,ind+1,target,count,temp,ans);
       
        i++;

    }
    cout<<endl;
}

int getSumCount(vector<int>&coin,int target){
int count=0;
int sum=0;
vector<int> temp;
vector<vector<int>> ans;
solve(coin,sum,0,target,count,temp,ans);
for(auto v:ans){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
    return count;
}


 int main(){
 vector<int> coin={5,2,1};
 cout<<getSumCount(coin,18);
 return 0;
 }