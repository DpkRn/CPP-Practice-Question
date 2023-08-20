 #include<bits/stdc++.h>
 using namespace std;
void quickSort(int arr[],int low,int high){
    if(low>=high)
    return;
    int pivot=arr[low];
    int i=low;
    int j=high;
   while(i<=j){
    
      while(arr[i]<=pivot)
      i++;
      while(arr[j]>pivot)
      j--;
   
      if(i>j)
      break;
      swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    quickSort(arr,low,j-1);
    quickSort(arr,i,high);
}

 int main(){
 int arr[10]={5,2,2,4,1,7,1,0,8};
 quickSort(arr,0,8);
 for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
 }
 return 0;
 }