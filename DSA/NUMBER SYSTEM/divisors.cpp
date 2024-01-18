 #include<bits/stdc++.h>
 using namespace std;

 //Brute Force

//  int divisors(int n){
//     int cnt=0;
//     for(int i=1;i<=n;i++){
//         if(n%i==0) cnt++;
//     }
//     return cnt;
//  }

 //optimised  
 /*
 Approach: suppose  i have to count the divisiors of m
 so if i is the divisior of m then there must be quotent<=m
    i.e i*q=m
        i*m/i=m where q=m/i
        so if upto m if i is the divisor of m then also q be one of the divisor so at a time we can count two divisors.
    -> where to end:
            as we know that  root m * root m  = m so we can say root m is the middle divisor
            so we will run loop from i*i<=m and we will count each divisor 2 times
            note: the things to notice that if we take 16 then 4*4 this will be count as only one time because its common in both side

 */

 int divisors(int m){
    int cnt=0;
    for(int i=1;i*i<=m;i++){
        if(m%i==0){ 
        cnt++;
        if(i*i!=m)
        cnt++;
        }
    }
    return cnt;
 }

 int main(){
  cout<<divisors(16);
 return 0;
 }