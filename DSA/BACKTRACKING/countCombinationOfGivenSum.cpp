  #include<bits/stdc++.h>
 using namespace std;

int solve( vector<int> arr,int i,int sum,int target){
   
    if(sum>target)
    return 0;
    if(i>=arr.size()){
        if(sum==target)
        {
        return 1;
        }
        return 0;
    }
    sum+=arr[i];
   int l=solve(arr,i+1,sum,target);
    
    sum-=arr[i];
    int r= solve(arr,i+1,sum,target);
    return l+r;
}
int getComb(vector<int> arr,int target){
  int c=0;
   int i=0;
   int sum=0;
   return solve(arr,i,sum,target);
}

 int main(){
 vector<int> v={1,2,3};
 int target=3;
 cout<<getComb(v,target);
 return 0;
 }
