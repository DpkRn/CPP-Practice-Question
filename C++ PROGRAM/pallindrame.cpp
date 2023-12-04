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
 string str="maam";
 if(str==rev(str))
 cout<<"pallindrame";
else
cout<<"not pallindrame";
 return 0;
 }