#include<iostream>
using namespace std;
int main(){
    int a[5]={2,4,6,8};
    int size1=5,size2=4,size3=9;
    int a1[size1]={2,4,6,8,5};
    int a2[size2]={3,4,2,5};
    int a3[size3];
    int index=0;
    cout<<"First Array: ";
    for(int i=0;i<size1;i++){
        cout<<a1[i]<<"     ";
        a3[index++]=a1[i];
    }
    cout<<"Second Array: ";
    for(int i=0;i<size2;i++){
        cout<<a2[i]<<"     ";
        a3[index++]=a2[i];
    }
cout<<endl<<"Third array after merged:"<<endl;
    for(int i=0;i<size3;i++){
        
            cout<<a3[i]<<"    ";
        
    }
    return 0;
}