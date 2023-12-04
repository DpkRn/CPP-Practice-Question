 #include<bits/stdc++.h>
 using namespace std;
 string returnDuplicate(string str){
    string ans="";
    map<int,int> m;
    for(int i=0;i<str.size();i++){
       
        m[str[i]]++;
    }
    for(auto x:m){
        if(x.second>1)
        ans+=x.first;
    }
    return ans;
 }
 int main(){
 string str="Deepak";
cout<<returnDuplicate(str);
 return 0;
 }