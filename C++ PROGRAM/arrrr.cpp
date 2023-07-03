#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the row and column of first matrix:";
    int fr,rc;
    cin>>fr>>fc;
    int m1[fr][fc];
    cout<<"Enter  "<<fr*fc<<"  element:"<<endl;
    for(int i=0;i<fr;i++){

        for(int j=0;j<fc;j++){
            cin>>m1[fr][fc];
        }
    }
}
