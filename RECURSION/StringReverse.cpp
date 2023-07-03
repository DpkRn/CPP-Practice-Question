#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string reverseString(string str,int i,int j){
    if(i>j)
    return str;

    swap(str[i],str[j]);
    return  reverseString(str,i+1,j-1);
  
  
}

int main(){
string str="deepak";

string ans=reverseString(str,0,str.length()-1);
//0,5
cout<<ans;
}

//another approach
// int main(){
//     string str="deepak";
//  int i=0,j=str.length()-1;
//  while(i<j){
//     swap(str[i],str[j]);
//     i++;
//     j--;
//  }
//  cout<<str;

// }

//another approach
// int main(){
//     string str="deepak";
//  int i=0;
//  while(i<str.length()/2){
//     swap(str[i],str[str.length()-1-i]);
// i++; }
//  cout<<str;

// }