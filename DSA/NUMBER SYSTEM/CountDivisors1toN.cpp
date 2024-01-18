 #include<bits/stdc++.h>
 using namespace std;

 //Brute force
//   int divisors(int m){
//     int cnt=0;
//     for(int i=1;i*i<=m;i++){
//         if(m%i==0){ 
//         cnt++;
//         if(i*i!=m)
//         cnt++;
//         }
//     }
//     return cnt;
//  }
//  int countDivUptoN(int n){
//     int cnt=0;
//     for(int i=1;i<=n;i++){
//         cnt+=divisors(i);
//     }
//     return cnt;
//  }

 //optimised 
 /*
 Approach: in above method we are sending each number one by one to divisiors method and adding all the divisors to our result
            which takes O(n\/n)
            lets suppose to get divisors of 12 it will run 1 2 3
            agian for                       16 it will run 1 2 3 4 so we are wasting our iteration by repeating twice
        so instead searching divisors we will play with multiple if 2 is the divisors of 16 then 16 is the multiple of 2
        so that 
        will use hash map concept to keep frequecy of divisors
        suppose no is 1 to 10
        so i know 1 will be divisors of     1 2 3 4 5 6 7 8 9 10 now all nos have 1 divisors right
        now try with 2 ..2 having multiple  2 4 6 8 10 so we can say upto 2 as divisors 1 having 1 divisors 2 having 2 divisors
                                          3 having 1 and 4 having 2 divisors like that iterate upto n and keep increasing cnt of multiples.
     
 */
int countDivUptoN(int n){
     vector<int> div(n+1,0);
     for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            div[j]++;
        }
     }
     int cnt=0;
     for(int i=0;i<n+1;i++){
        cnt+=div[i];
     }
     return cnt;
}
 int main(){
  cout<<countDivUptoN(12);
 return 0;
 }