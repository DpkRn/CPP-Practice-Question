#include <bits/stdc++.h> 
using namespace std;
void heapify(vector<int> &arr, int i, int n){
    int largest = i;
    int left = 2*i+1;
    int right=2*i+2;
    if(left<n&&arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n&&arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,largest,n);
    }
}
vector<int> buildMaxHeap(vector<int> &arr)
{
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,i,n);
    }
    return arr;
}
int main(){
    vector<int> arr={23,51,24,14,56,36,24,26,11};
    arr=buildMaxHeap(arr);
    for(auto i:arr)
    cout<<i<<' ';
    cout<<endl;

    //using priority_queue //max - heap
    priority_queue<int> pq;
    pq.push(3);
    pq.push(8);
    pq.push(1);
    cout<<"top : "<<pq.top()<<endl;
    cout<<"size: "<<pq.size()<<endl;
    pq.pop();
    cout<<"top after deleting: "<<pq.top()<<endl;

}