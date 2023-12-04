 #include<bits/stdc++.h>
 using namespace std;
 int countWords(string str){
    stringstream ss(str);
    string temp;
    int count=0;
    while(ss>>temp)
    count++;
   return count;
 }
 int main(){
 string str="hi how are you";
 cout<<countWords(str);

 return 0;
 }