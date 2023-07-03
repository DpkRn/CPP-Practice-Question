#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"Enter string:";
    string str;
    getline(cin,str);
    cout<<"Enter substring:";
    string substr;
    getline(cin,substr);
    int c=0;
    int found=str.find(substr);
    while(found!=string::npos){
    c++;
    found=str.find(substr,found+1);
    }
    cout<<c;;
    return 0;
}