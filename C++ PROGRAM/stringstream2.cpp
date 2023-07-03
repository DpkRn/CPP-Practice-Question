//write a program to change string value to Integer and vice versa
#include<iostream>
#include<sstream>
#include<typeinfo>
using namespace std;
int main(){
    cout<<"Enter String:";
    string str;
    cin>>str;
    stringstream ss;
    ss<<str;
    int no;
    ss>>no;
    ss.clear();
    cout<<"type of no:"<<no<<typeid(no).name();
    cout<<endl<<"Now Enter the integer:";
    int n;
    string sss;
    cin>>n;
    ss<<n;
    ss>>sss;
    cout<<endl<<"Typ becomes of n:"<<typeid(sss).name();
    return 0;
}