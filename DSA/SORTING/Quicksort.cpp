 #include<bits/stdc++.h>
 using namespace std;
 int partArr(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
   while(i<=j){
    
      while(arr[i]<=pivot&&i<=high-1)
      i++;
      while(arr[j]>pivot&&j>=low+1)
      j--;
   
      if(i<j)
      swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
 }
void quickSort(int arr[],int low,int high){
    if(low>=high)
    return;
    int partInd=partArr(arr,low,high);
    quickSort(arr,low,partInd-1);
    quickSort(arr,partInd+1,high);
}

 int main(){
 int arr[10]={1,4,3,2,1};
 quickSort(arr,0,4);
 for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
 }
 return 0;
 }