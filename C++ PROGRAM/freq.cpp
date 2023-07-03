#include<iostream>
using namespace std;
int main(){

    int lm;
    cout<<"Enter limit:";
    cin>>lm;
    int arr[lm];
    cout<<"enter element";
    for(int i=0;i<lm;i++){
        cin>>arr[i];
    }
    cout<<"array"<<endl;
     for(int i=0;i<lm;i++){
        cout<<arr[i]<<endl;
    }
     int r[lm];
    for(int i=0;i<lm;i++){
        int c=0;
        for(int j=0;j<lm;j++){
            if(arr[i]==arr[j]){
                c++;
            }
            r[i]=c;
        }
    }
    cout<<endl<<"frequency:"<<endl;
    for(int i=0;i<lm;i++){
        cout<<r[i]<<endl;
    }
    return 0;
}