 #include<bits/stdc++.h>
 using namespace std;
 int getSetbit(int n){
    if(n==0)
    return 0;
 return getSetbit(n>>1)+(n&1);// return getSetbit(n>>1)+(n%2);
 }
 int main(){
 cout<<getSetbit(15);
 return 0;
 }