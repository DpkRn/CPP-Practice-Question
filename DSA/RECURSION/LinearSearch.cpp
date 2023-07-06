#include<iostream>
using namespace std;
bool isAvailable(int *arr,int size,int n){
    if(size==0)
    return false;
    if(arr[0]==n)
    return true;
    else 
    return isAvailable(arr+1,size-1,n);
}
int main(){
    int arr[]={1,2,3,4,6};
    int size=5;
    int n=1;
    bool ans=isAvailable(arr,size,n);
    if(ans)
    cout<<"available";
    else
    cout<<"not available";
}