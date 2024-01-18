 #include<bits/stdc++.h>
 using namespace std;

 //Brute force check each no 1 by one if its prime increase cnt by 1

//  bool isPrime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0) return 0;
//     }
//     return true;
// }
//  int CountPrimeUptoN(int n){
//     int cnt=0;
//     for(int i=1;i<=n;i++){
//         if(isPrime(i))
//         cnt++;
//     }
//     return cnt;
//  }

//optimised
/*
Approach: we can count prime no without counting divisors 
    like divisors we are also wasting our iterator to check the prime no ex if i have checked that 8 is not prime 
    then we dont need to check that 16 24 beacuse it will also be not prime.
    so will create a hash map that will update all of the next so that we will avoid to iterate after words
*/
 int CountPrimeUptoN(int n){
    vector<int> prime(n+1,1); //lets say all are prime.. and i will check only prime values to update next
    prime[1]=0; // 1 is not prime
    for(int i=2;i<=n;i++){
        if(!prime[i]) continue;
        for(int j=i*i/*i*2*/;j<=n;j+=i){
           prime[j]=0;
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(prime[i]) cnt++;
    }
    return cnt;
 }
 int main(){
    cout<<CountPrimeUptoN(100);
 return 0;
 }