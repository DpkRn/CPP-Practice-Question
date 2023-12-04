 #include<bits/stdc++.h>
 using namespace std;
 bool isAna(string str1,string str2){
if(str1.size()==str2.size())
 {
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2)
    return true;
     return false;

 }
 
 return false;
 }
 int main(){
    string str1="litsen";
    string str2="silent";
 cout<<isAna(str1,str2);
 return 0;
 }