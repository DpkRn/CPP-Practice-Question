#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Enter no:";
int n;
cin>>n;

bitset<16> bin16bits(n);
bitset<4> bin4buts(n);
cout<<bin16bits<<" "<<bin4buts;
return 0;
}