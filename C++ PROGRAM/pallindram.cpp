#include<iostream>
using namespace std;
int main(){
    int lm;
    cout<<"Enter limit:";
    cin>>lm;
    int a=2,b=3,arr[lm];
    int n,c=0;
    while(c<lm){
     n=a+b;
     arr[c++]=n;
     a=b;
     b=n;
    }
    cout<<"Array stored!"<<endl;
    for(int i=0;i<lm;i++){
        cout<<arr[i]<<endl;
    }
return 0;

    
}