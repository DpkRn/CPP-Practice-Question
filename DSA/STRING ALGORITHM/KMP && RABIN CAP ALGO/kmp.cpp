 #include<bits/stdc++.h>
 #define ll long long
 using namespace std;
 const int mod=(int)(1e9+7);

 vector<int> findLps(string pat){
     //string pat="aabaaac";
    int n=pat.size();
    vector<int> lps(n,0);
    int k=0;
    for(int i=1;i<n;i++){
        while(k>0&&(pat[i]!=pat[k])) k=lps[k-1];
        if(pat[i]==pat[k]) k++;
        lps[i]=k;
    }
    // for(auto it:lps) cout<<it<<" ";
    // cout<<endl;
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
    string t,p;
    cout<<"Enter Text:"; cin>>t; //onionionspi
    cout<<"Enter Pattern:"; cin>>p; //onions
    findIndex(t,p);
 return 0;
 }

 
