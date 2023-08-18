 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 string str="Ram Mohan Shyam Ram Mohan";
 string str1;
 stringstream ss(str);
 string temp;
 map<string,int> m;
 while(ss>>temp){
    m[temp]++;
 }

 cout<<m["Ram"];
 return 0;
 }