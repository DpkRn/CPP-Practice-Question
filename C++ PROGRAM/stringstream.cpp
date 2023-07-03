#include<iostream>
#include<sstream>
using namespace std;
int main(){
    
    string str="hey,its Dwzard ! how are you";
    
    //cout<<str;
   stringstream ss;
    ss<<str;
    string buff;
   // ss>>buff;
    //cout<<buff;
    while(ss>>buff){
        cout<<buff<<" ";
    }
    return 0;
}