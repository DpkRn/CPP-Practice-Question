#include<iostream>
using namespace std;
class oper{
    int *arr;
    public:
    oper(int *a){
        arr=a;
    }
    void insertat(int p,int num){
        int l=sizeof(arr);
        cout<<endl<<"size:"<<l<<endl;
        for(int i=l-1;i>p-1;i--){
            
            arr[i+1]=arr[i];

        }
        arr[p-1]=num;
    }
};
int main(){
    int a[5];
    int size=5;
    for(int i=0;i<5;i++){
    cin>>a[i];
    }

    oper m(a);
    m.insertat(3,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }


    
    return 0;
}
