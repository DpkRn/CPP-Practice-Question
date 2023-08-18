 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 string str="this is temparory fire c++";
 //cout<<str.find("is",0);
 int i=0;
 int c=0;
    string str1="is";
 while(i<str.size()-str1.size()){
    if(str.substr(i,str1.size())=="is"){
     c++;
    i=i+str1.size();
    }
    else{
    i++;
    }
 }
 cout<<c;
 return 0;
 }