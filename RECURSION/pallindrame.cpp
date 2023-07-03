#include<bits/stdc++.h>
using namespace std;
// bool isPallindrame(string str,int i){
//     if(i>str.length()-1-i)
//     return true;
//     if(str[i]!=str[str.length()-1-i])
//     return false;
// else
//     return isPallindrame(str,i+1);


// }

bool isPallindrame(string str,int i){
   if(i>=(str.length()/2))
   return true;
   int c=str.length()-1-i;
   bool ans=isPallindrame(str,i+1);
   bool res=(str[c]==str[i]);
   return ans&&res;
  

}
int main(){
    string str;
    cout<<"Enter string:";
    cin>>str;
    bool ans= isPallindrame(str,0);
    if(ans)
    cout<<"yes";
    else
    cout<<"no";
return 0;
}