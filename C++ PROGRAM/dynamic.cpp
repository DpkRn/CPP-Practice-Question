#include<iostream>
using namespace std;


int main(){

cout<<"Enter array of size:";
int size;
cin>>size;
int s[size];
int **arr=new int*[size];
for(int i=0;i<size;i++){
    cout<<"Enter"<<(i+1)<<" th subarray size:";
    cin>>s[i];
    arr[i]=new int[s[i]];
    for(int j=0;j<s[i];j++){
    cin>>arr[i][j];
    }
}

for(int i=0;i<size;i++){
    for(int j=0;j<s[i];j++){
    cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
}
for(int i=0;i<size;i++){
delete[] arr[i];
}
delete[] arr;
return 0;
}