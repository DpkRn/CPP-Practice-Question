#include<bits/stdc++.h>
using namespace std;


//optimised 
/*
Approach: we need to find only one divisors except of 1 and itself
    so as we know the half divisors will be left side of \/n the other will be right side because \/n is the middle
    one divisor of n;
    so if i am able to find any divisiors befor or upto \/n then it will not be prime other wise it will be prime
*/
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return true;
}
int main(){
    cout<<isPrime(37);
return 0;
}