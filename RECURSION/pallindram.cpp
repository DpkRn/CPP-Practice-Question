// Online C++ compiler to run C++ program online
#include <iostream>

// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPal(string str,int ind){
    if(ind>=str.length()/2){
        return true;
    }
     char l=str[ind];
     return isPal(str,ind+1)&&l==str[str.length()-1-ind];
}


int main() {
    // Write C++ code here
    bool ans=isPal("abcbda",0);
    cout<<ans;

    return 0;
}