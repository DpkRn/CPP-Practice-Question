 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 string str="its is in fire!";
 string word="its";
 auto it=str.find(word,0);

 if(it!=-1)
 cout<<"found";
 else
 cout<<"not found";

 }