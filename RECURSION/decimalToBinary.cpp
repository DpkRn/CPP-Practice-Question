 #include<bits/stdc++.h>
 using namespace std;
 string decimalToBinary(int n){
    if(n==0)
    return "";
    int r=n%2;
     return  decimalToBinary(n/2)+to_string(r);
     //return to_string(r)+ decimalToBinary(n/2); this will first add nd then return so its wrong 
 }
 int main(){
 int n;
 cout<<"Enter no:";
 cin>>n;
 string str=decimalToBinary(n);
 cout<<"binary: "<<str;
 return 0;
 }