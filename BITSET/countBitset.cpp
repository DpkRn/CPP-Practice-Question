 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    //using predefined method
    cout<<"Enter no:";
    int n;
    cin>>n;
    cout<<"no of bits:"<<__builtin_popcount(n)<<endl;
//using bitset container
 bitset<10> b("01011");
 cout<<"int given bit:"<<b.count();


 return 0;
 }