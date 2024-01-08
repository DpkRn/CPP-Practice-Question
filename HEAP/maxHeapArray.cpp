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
// Test Case: 60 50 40 30 20 55 70
// max heap complete binary tree  shuld be make like this
/*
         70
       /   \
     50    60
    / \    / \
 30   20 40   55 

 stored array[]= 70 50 60 30 20 40 55

*/
 
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