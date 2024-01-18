 /*
 #heapify is a techniqe which use to convert an array or binary tree into max heap or min heap
 ...............................................................................
 in which we use the complete binary tree hypothetically using an array ex
 
               54
              /  \
            55   60
           / \   
          52 50            
 
 suppose i have array of size 5  
             1  2  3  4  5
 Test Case: 54,55,60,52,50

 some formula to access child parents and leaf node
 if you are at ith index and want to know its
 left child -> 2*i
 right child -> 2*i+1
 parent Node -> i/2

 leaf node of binary tree -> from (lastInd/2+1) to lastInd
     lastInd=5;
     leaf Node -> 5/2+1 to 5 -> 3 to 5 in array i.e 52 55 60
 */

//step 1: as we know leaf node is always is parent node it does not need to compare with child to be greater itself
//  in order to make max hap. so traverse each element one by one except leaf node to place its correct position 
//  we use heapify techniqe . so make function which will take arr, size, and a node to put at right place
//step 2: traverse non-leaf node from i=n/2->0 and send to the heapify method
//step 3: in heapfy function
//           compare node from left child to write child get smallest child and set it as parent by swaping the value and check again 
//           and send again heapfy method
 #include<bits/stdc++.h>
 using namespace std;


 void heapfy(int arr[],int i,int n){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<n&&arr[left]>arr[largest]){
        largest=left;
    }    
    if(right<n&&arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapfy(arr,largest,n);
    }
 }

 int main(){
    int arr[6]={-1,54,55,60,52,50};
    int n=5;
       for(int i=n/2;i>0;i--){
        heapfy(arr,i,n);
       }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
 }