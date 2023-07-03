// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include<cstdlib>
#include<iostream>
using namespace std;

int main() {
    // Write C++ code here
   int n=16;

   string binary=bitset<8>(n).to_string();
   binary.erase(0, binary.find_first_not_of('0'));
   //binary.replace(binary.length()-1-1,1,'1');
   binary[4]='1';
   cout<<binary<<endl;
   int ans=stoi(binary,0,2);
   cout<<ans<<endl;



    return 0;
}