#include<bits/stdc++.h>
using namespace std;
void sayDigit(int n){
    //432
    //four three two
    string num[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0)
        return ;
    int LastDigit=n%10;
    sayDigit(n/10);
    
    cout<<num[LastDigit]<<" ";
   
    
}
int main(){
    cout<<"Enter No:";
    int n;
    cin>>n;
    sayDigit(n);
    return 0;
}