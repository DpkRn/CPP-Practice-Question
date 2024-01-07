 #include<bits/stdc++.h>
 using namespace std;
 bool isDuplicate(string str){
    int mask=0;
    for(int i=0;i<str.size();i++){
        int bitIndex=str[i]-'a';
        if((mask>>bitIndex)&1==1)
            return true;
        mask=mask|1<<bitIndex;
       
    }
    return false;
 }
 int main(){
 string str="depak";
 cout<<isDuplicate(str);

 return 0;
 }