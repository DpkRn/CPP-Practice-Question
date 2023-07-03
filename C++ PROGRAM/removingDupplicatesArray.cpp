#include<iostream>
using namespace std;
int main(){
    cout<<"Enter array size :";
    int n;
    cin>>n;

    int arr[n];
    for(int i=n-1;i>=0;i--){
        cout<<"Enter "<<i+1<<"th element:";
        cin>>arr[i];
    }

    cout<<"Elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i])
        max=arr[i];
    }
     cout<<"Largest Element of Array:"<<max<<endl;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
        }
    }

    cout<<"Distinct Elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
 return 0;
}