 #include<bits/stdc++.h>
 using namespace std;
 int partArr(int arr[],int low,int high){
    int pivot=arr[high];
       int i=low;
       for(int j=low;j<high;j++){
           if(arr[j]<pivot){
               swap(arr[i++],arr[j]);
           }
       }
       swap(arr[i],arr[high]);
       return i;
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