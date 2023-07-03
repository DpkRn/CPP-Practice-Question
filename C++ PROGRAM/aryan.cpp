#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string str;
    string m;
    //cout<<"Enter String:";
    getline(cin,str);
    stringstream ss(str);

    string buff;
    while(ss>>buff){
          stringstream ssr;
        int l=buff.length();
        for(int i=l-1;i>=0;i--){
         ssr<<buff[i];
        }
        
        ssr>>m;
        if(m==buff){
            cout<<buff<<"   ";}
            
        }
    }

