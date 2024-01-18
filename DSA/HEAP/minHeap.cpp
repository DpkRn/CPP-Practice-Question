#include <bits/stdc++.h> 
using namespace std;
void heapify(vector<int> &arr, int i, int n){
    int smallest = i;
    int left = 2*i+1;
    int right=2*i+2;
    if(left<n&&arr[smallest]>arr[left]){
        smallest=left;
    }
    if(right<n&&arr[smallest]>arr[right]){
        smallest=right;
    }
    if(smallest!=i){
        swap(arr[smallest],arr[i]);
        heapify(arr,smallest,n);
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,i,n);
    }
    return arr;
}
int main(){
    vector<int> arr={23,51,24,14,56,36,24,26,11};
    arr=buildMinHeap(arr);
    for(auto i:arr)
    cout<<i<<' ';
    cout<<endl;

        //using priority_queue //max - heap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(3);
    pq.push(8);
    pq.push(1);
    cout<<"top : "<<pq.top()<<endl;
    cout<<"size: "<<pq.size()<<endl;
    pq.pop();
    cout<<"top after deleting: "<<pq.top()<<endl;

    priority_queue<char,vector<char>,greater<>> pqc;
    pqc.push('b');
    pqc.push('d');
    pqc.push('a');
    cout<<"top : "<<pqc.top()<<endl;
    cout<<"size: "<<pqc.size()<<endl;
    pqc.pop();
    cout<<"top after deleting: "<<pqc.top()<<endl;
}