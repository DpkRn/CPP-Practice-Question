 #include<bits/stdc++.h>
 #include<cctype>
 using namespace std;
void solve(string &str,int ind,string &res){

    if(ind==str.length()){
        return ;
    }
    if(isalpha(str[ind])){
        res=res+str[ind];
        solve(str,ind+1,res);

    }else
    solve(str,ind+1,res);
}

string removePunc(string str){
    int ind=0;
    string res="";
    solve(str,ind,res);
    return res;
}
bool isPallindrome(string str,int ind){
   if(ind>str.length()-1-ind)
   return true;
   if(str[ind]!=str[str.length()-1-ind])
   return false;
   else
   return isPallindrome(str,ind+1);
   
}


 int main(){
 string str="race 3467a 789car";
 string s1=removePunc(str);

 transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
 cout<<s1<<endl;
 bool res=isPallindrome(s1,0);
 
if(res)
cout<<"its pallindrom";
else 
cout<<"its not pallindrom";
 return 0;
 }