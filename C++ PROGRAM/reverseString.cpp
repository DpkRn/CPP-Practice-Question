 #include<bits/stdc++.h>
 using namespace std;
 string rev(string str){
    int l=0;int r=str.size()-1;
    while(l<=r){
        swap(str[l],str[r]);
        l++;r--;
    }
    return str;
 }
 int main(){
 cout<<rev("Deepak");
 return 0;
 }