#include<iostream>
using namespace std;
int main()
{  int s=5;
    int a[5]={1,2,3,4,5};

     for(int i=0;i<s;i++){
        cout<<a[i]<<"  ";
     }
    cout<<endl<<"Enter the no and position:";
    int x,p;
     cin>>x>>p;

    for(int i=s-2;i>=p-1;i--){
        a[i+1]=a[i];
    }
    a[p-1]=x;
    cout<<endl<<"after inserting"<<endl;
     for(int i=0;i<s;i++){
        cout<<a[i]<<"  ";
     }

     return 0;
}
