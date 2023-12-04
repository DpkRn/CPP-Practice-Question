#include<bits/stdc++.h>
int f(string s,int sind,string t,int tind,vector<vector<int>> &dp){
	if(sind<0||tind<0)
	return "";
	if(dp[sind][tind]!=-1) return dp[sind][tind];
	if(s[sind]==t[tind])
	return dp[sind][tind]=s[sind]+f(s,sind-1,t,tind-1,dp);
	

	return dp[sind][tind]=""+max(f(s,sind,t,tind-1,dp),f(s,sind-1,t,tind,dp));
}

string lcs(string s, string t)
{

	vector<vector<int>> dp(s.size(),vector<int>(t.size(),-1));
    ;
	return f(s,s.size()-1,t,t.size()-1,dp);
    


	
}
  int main(){
  string s="acd";
  string t="ecd";
  
  cout<<lcs(s,t);

  return 0;
  }
