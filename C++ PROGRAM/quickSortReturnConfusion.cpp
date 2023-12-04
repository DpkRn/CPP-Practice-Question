#include<iostream>
using namespace std;
int partition(int arr[],int st,int end){
    int pivot=arr[st];
    int count=0;
    for (int i=st+1;i<=end;i++){
        if(arr[i]<pivot) count++;
    }
    int pivotInd=st+count;
    swap(arr[st],arr[pivotInd]);
    while(st<pivotInd && end>pivotInd){
        while(arr[st]<pivot) st++;
        while(arr[end]>pivot) end--;
        if(st<pivotInd && end>pivotInd) swap(arr[st++],arr[end--]);
    }
     
}
void quickSort(int arr[],int st,int end){
    if(st>=end){
        return;
    }
    int p=partition(arr,st,end);
    cout<<p<<"\n";
    quickSort(arr,st,p-1);
    quickSort(arr,p+1,end);
}   
int main(){
    int arr[]={12,1,6,3,23,68,32,76,98,23,45,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
return 0;
}