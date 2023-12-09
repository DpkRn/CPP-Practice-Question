#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> v){
    for(auto x:v){
        for(auto ele:x){
            cout<<ele<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter No:";
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    int x=1;
    int left=0,start=0;
    int right=n-1,bottom=n-1;
    while(left<=right&&start<=bottom){
        for(int i=left;i<=right;i++){
            arr[start][i]=x++;
        }
        start++;
        for(int i=start;i<=bottom;i++){
            arr[i][right]=x++;
        }
        right--;
        for(int i=right;i>=left;i--){
            arr[bottom][i]=x++;
        }
        bottom--;
        for(int i=bottom;i>=start;i--){
            arr[i][left]=x++;
        }
        left++;
    }

    print(arr);
}