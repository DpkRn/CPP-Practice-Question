 //max heap means when elements are stored in complete binary tree in such that all the chiled node is less thant
 //the parent node.. after inserting the no check the parents node by i/2 if the parent node is less than the chiled 
 //swap nodes and again check the swapped value by another parents until and unless you donot find the root
 /*
 some formula to access chiled parents
 if you are at ith index and want to know its
 left child -> 2*i
 right child -> 2*i+1
 parent Node -> i/2
 //some restrictions apply
 left sibling -> i-1
 right sibling ->i+1
 
 */
// Test Case 1: 60 50 40 30 20 55 70
// Test Case 2: 50 55 20 52 54 
// max heap complete binary tree  shuld be make like this
/*
         70
       /   \
     50    60
    / \    / \
 30   20 40   55 
        ind    0  1  2  3  4  5  6  7
 stored array[]= 70 50 60 30 20 40 55
 //lets i am standing at 60 node i.e 3rd index in array
 parent node-> i/2 -> 3/2 -> 1th ind i.e 70 //check in binary tree
 left child -> 2*i -> 2*3 -> 6th ind i.e 40 //check left child in binary tree
 
*/
//conclusion: we stored entered value in array in such a way so that without creating max heap binary tree we cann access the 
//parent child etc.

//structured code
//Time Complexity of Insertion: O(log(N))
//Time Complexity of Deletion : O(long(N))
#include<bits/stdc++.h>
using namespace std;
class heap{
    int arr[1000];
    int size;
    public:
    heap(){
        arr[0]=-1;
        size=0;
    }
    heap(int arr[],int n){
       for(int i=0;i<n;i++){
        this->arr[i]=arr[i];
       }
       size=n-1;
    }
    void insert(int val){
        size++;
        arr[size]=val;
        int ind=size;
        while(ind>1){
            int parentInd=ind/2;
            if(arr[parentInd]<arr[ind]){
            swap(arr[parentInd],arr[ind]);
            }
            else {
                return ;
            }
            ind=parentInd;
        }
    }
    void pop(){
        if(size==0){
            cout<<"empty !"<<endl;
            return ;
        }
        int ind=1;
        arr[ind]=arr[size];
        size--;
        while(ind<size){
            int leftChild=2*ind;
            int rightChild=2*ind+1;
            if(leftChild<=size&&arr[leftChild]>arr[ind]){
                swap(arr[leftChild],arr[ind]);
                ind=leftChild;
            }else if(rightChild<=size&&arr[rightChild]>arr[ind]){
                     swap(arr[rightChild],arr[ind]);
                     ind=rightChild;               
            }else{
                return ;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    int top(){
        if(size==0)
        return -1;
        return arr[1];
    }
    int getSize(){
        return size;
    }
};
// heapify takes a node index and it places that node at right place
void heapify(int arr[],int i,int n){
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
        heapify(arr,largest,n);
    }
 }

 void heapSort(int arr[],int n){
    int size=n;
    while(size>1){
        swap(arr[size],arr[1]);
        size--;
        heapify(arr,1,size);
    }
 }

int main(){
    //using class
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(20);
    h.insert(52);
    h.insert(54);
    int size=h.getSize();
    while(size){
        cout<<h.top()<<" ";
        h.pop();
        size--;
    }
    cout<<endl;

    //using method
    int arr[6]={-1,54,53,55,52,50};
    //making heap array
    int n=5;
    for(int i=n/2;i>0;i--)
       heapify(arr,i,n);

    //printing heapified array
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    heapSort(arr,5);

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}


 
 /*
 rough code....
 #include<bits/stdc++.h>
 using namespace std;
 void print(int arr[],int lastInd){
    for(int i=1;i<=lastInd;i++)
    cout<<arr[i]<<' ';
 }
 int main(){
    cout<<"enter level of tree:";
    int l;
    cin>>l;
    int n=pow(2,l);
   int arr[n];
   arr[0]=INT_MAX;
   int lastInd=1;
   while(lastInd<10){
    cout<<"enter No:";
    cin>>arr[lastInd];
    int ind=lastInd;
    int p=lastInd/2;
    while(arr[p]<=arr[ind]){
        swap(arr[p],arr[ind]);
        ind=p;
        p=p/2;
    }
    print(arr,lastInd);
    lastInd++;
    cout<<endl;
   }
 return 0;
 }
 */