#include<iostream>
using namespace std;
int main(){
    int r=6;
    int &m=r;
    
    m=m+1;
    cout<<r<<"hello";
}