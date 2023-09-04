 
 /*
 
 
 */
 #include<bits/stdc++.h>
 using namespace std;
 void solve(string s1, vector<string> &list){
    if(s1.size()==1){
        list.push_back(s1);
        return;
    }
    list.push_back(s1);
    solve(s1.substr(1),list);
    solve(s1.substr(0,s1.size()-1),list);
 }
 int getCommon(string s1,string s2){
    vector<string> list;
    solve(s1,list);

    for(auto s:list){
        if(s2.find(s)!=-1){
        cout<<"common:"<<s<<endl;
        return s.size();
        }
    }
   
    return 0;
 }
 int main(){
 string s1="ABCBDAB";
 string s2="BDCABA";
 cout<<getCommon(s1,s2);
 return 0;
 }