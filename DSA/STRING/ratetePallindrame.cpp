 //given a string , check it is rotated pallindrame or not ex if we left shift 3 times 
 // ti cbaabcd then it will become abcdca that is pallindrome

 #include<bits/stdc++.h>
 using namespace std;
 bool isP(string str){
    int n=str.size();
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-1-i]) return false;
    }
    return true;
 }
 bool isValid(string str){
    for(int i=0;i<str.size();i++){
        if(isP(str)) return true;
        rotate(str.begin(),str.begin()+1,str.end());
    }
    return false;
 }
 int main(){
    string str="cbaabcd";
    if(isValid(str)){
        cout<<"YES";
    }
    else cout<<"NO";
 return 0;
 }

 /*
 
 Recursive approach //

 #include<bits/stdc++.h>
 using namespace std;
 bool isP(string str,int l,int r){
    if(r<=l) return true;
   if(str[l]!=str[r]) return false;
    return isP(str,l+1,r-1);
 }
 bool isValid(string str,int l,int r,int n){
    if(l==n) return false;
    if(isP(str,l,r)) return true;
    str=str+str[l];
    return isValid(str,l+1,r+1,n);   
 }
 int main(){
    string str="cbaabcd";
    int n=str.size();
    if(isValid(str,0,n-1,n)){
        cout<<"YES";
    }
    else cout<<"NO";
 return 0;
 }
 */