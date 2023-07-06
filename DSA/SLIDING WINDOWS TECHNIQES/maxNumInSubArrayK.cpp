 #include<bits/stdc++.h>
 using namespace std;
 void printMax(int arr[],int n,int k){
    vector<int> v;
    int i=0,j=0;
    int maxv=INT_MIN;
    while(j<n){
        maxv=max(maxv,arr[j]);
        if(j-i+1<k){
            j++;
        }
        else
        {
            v.push_back(maxv);
            j++;
            if(maxv==arr[i]){
                maxv=0;
               for(int k=i+1;k<=j;k++){
                maxv=(maxv,arr[k]);
               }
            }
            i++;
        }
    }

    for(int i:v){
        cout<<i<<" ";
    }
 }
 int main(){
    int n;
    cout<<"Enter size of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter size of SubArray:";
    int k;
    cin>>k;
    printMax(arr,n,k);
    
 
 return 0;
 }