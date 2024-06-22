 #include<bits/stdc++.h>
 #define ll long long
 using namespace std;
 const int mod=(int)(1e9+7);

 vector<int> findLps(string pat){
     //string pat="aabaaac";
    int n=pat.size();
    int len=0;
    vector<int> lps(n,0);
    lps[0]=0;
    int i=1;
    while(i<n){
        if(pat[len]==pat[i]){
            len++;
            lps[i]=len; i++; 
        }else{  
            //if not equal then set len to upto matching(previous) longest prefix same as suffix;  
            if(len!=0){
                len=lps[len-1];
                continue;
            }
            //else if j==0 then  increase i 
            i++;
        }
    }
    return lps;
 }


 void findIndex(string t,string p){
    vector<int> lps=findLps(p);
    int n=t.size(),m=p.size();
    int i=0,j=0;
    while(i<n){
        if(t[i]==p[j]){
            i++;j++;
        }else{
            if(j!=0){
                j=lps[j-1];
                continue;
            }
            i++;
        }
       
        if(j==m) {
            cout<<(i-p.size())<<" ";
            j=lps[j-1];
        }
    }
 }
 int main(){
    string t="onionionspi";
    string p="onions";
    findIndex(t,p);
 return 0;
 }

 
