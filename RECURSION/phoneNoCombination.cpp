 #include<bits/stdc++.h>
 using namespace std;
 void solve(string digit,string output,int index,vector<string> &ans,string mapping[]){
      if(index>=digit.length()){
        ans.push_back(output);
        return;
      }

      int value=digit[index]-'0';
      string str=mapping[value];
      for(int i=0;i<str.length();i++){
        output.push_back(str[i]);
        solve(digit,output,index+1,ans,mapping);
        output.pop_back();
      }

 }
vector<string> getCombination(string str){
     vector<string> ans;
     string output="";
     string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
     solve(str,output,0,ans,mapping);
     return ans;
}

 int main(){
 string  str="23";
 cin>>str;
vector<string> ans=getCombination(str);
for(auto s:ans)
cout<<s<<" ";
 return 0;
 }