 #include<bits/stdc++.h>
 using namespace std;
void getSubstring(string str, vector<string> &ans,map<string,int> &dp){
    if(dp[str]>0)
    return;
   if(str.size()==0){
    return;
   }

   dp[str]++;
   ans.push_back(str);
   string temp=str;
   temp.erase(0,1);
   getSubstring(temp,ans,dp);
   
   temp=str;
   temp.pop_back();
   getSubstring(temp,ans,dp);
     

}

 int main(){
 cout<<"Enter String:";
 string str;
 cin>>str;
 map<string,int> dm;
 vector<string> ans;
 getSubstring(str,ans,dm);
  cout<<"Substring: ";
 for(string data:ans)
 cout<<data<<" ";
 return 0;
 }