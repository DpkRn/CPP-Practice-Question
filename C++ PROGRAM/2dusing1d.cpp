#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"entr row and column:";
    cin>>r>>c;
    int *arr=new int[r*c];
    for(int i=0;i<r*c;i++){
        cin>>arr[i];
    }

    cout<<"Entered no;"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cout<<arr[i*c+j]<<"  ";
        }
        cout<<endl;
    }
}