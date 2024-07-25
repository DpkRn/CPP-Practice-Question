#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int mod=(int)(1e9+7);
const int INF = 9e15;
 int get(vector<int> arr,int x,int k){
    int n=arr.size();
    int l=0;int r=0;
    int cnt=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x) cnt++;
       
        while(cnt>=k){
             if(arr[l]==x) cnt--;
            l++;
        }
         if(cnt<k){
            ans+=(i-l+1);
        }
    }
    return ans;
 }                                                         
int32_t main(){                       // 1 2 3 4 //4-l+1 4-1+1 +4-2+1  + 4-3+1 4-4+1
   ios_base::sync_with_stdio(false);// 1, 1 2, 1 2 3, 1 2 3 4, 2, 2 3, 2 3 4, 3, 3 4 ,4  
   cin.tie(NULL);
   int x=2;
   int k=3;
   vector<int> arr={1,2,4,3,2,2};
   int y=get(arr,x,k);
   cout<<y<<endl;
   cout<<(arr.size()*(arr.size()+1))/2-y;
   
return 0;
}