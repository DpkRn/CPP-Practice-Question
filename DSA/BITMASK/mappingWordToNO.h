 #include<bits/stdc++.h>
 using namespace std;
 void solve(string str){
    int n=str.size();
    int mask=1<<n;
    string ans="";
    for(int i=0;i<mask;i++){
         string ans="";
    for(int j=0;j<3;j++){
        if((i>>(n-j-1))&1==1) ans+=str[j];
    }
    cout<<ans<<" ";
    }
 }


 int main(){
 string n,s;
 //cin>>s;
 solve("ABC");

 return 0;
 }