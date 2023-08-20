 
 //this takes time complexity o(nLogn)
 //space complexity o(n)
 #include<bits/stdc++.h>
  using namespace std;
 vector<int> merge(vector<int> left,vector<int> right){
    vector<int> ans;
    int l=0; int r=0;
    while(l<left.size()&&r<right.size()){
        if(left[l]<=right[r])
        ans.push_back(left[l++]);
        else
        ans.push_back(right[r++]);
    }

    while(l<left.size())
    ans.push_back(left[l++]);

     while(r<right.size())
    ans.push_back(right[r++]);

    return ans;
}


vector<int> mergeSort(vector < int > & arr,int low,int high){
    if(low>=high){
       vector<int>  ans;
       ans.push_back(arr[low]);
       return ans;
    }
    
 int mid=(low+high)/2;
  vector<int> left= mergeSort(arr,low,mid);
  vector<int> right=mergeSort(arr,mid+1,high);
  
  return merge(left,right);

}


 int main(){
    cout<<"Enter arraySize:";
    int n;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter "<<n<<" Element:";
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
   
  vector<int> ans= mergeSort(arr,0,n-1);
  for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
  }
 return 0;
 }
