#include<iostream>
using namespace std;
int sumOfArry(int arr[],int size){
    
   if(size==0)
   return 0;
   if ( size == 1 )
   return arr[0];

   return arr[0]+sumOfArry(arr+1,size-1);


}
int main(){
    cout<<"Enter size of array:";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=sumOfArry(arr,n);
    cout<<"Sum : "<<sum;
}