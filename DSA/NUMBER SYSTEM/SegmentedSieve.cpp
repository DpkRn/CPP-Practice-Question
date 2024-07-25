 #include<bits/stdc++.h>
 #define int long long int
 using namespace std;
 const int mod=(int)(1e9+7);
 const int INF = 9e15;
  /*
  Where it is used: find all the prime no where you will be given some range from [L,R] R can be any value upto 1e15 but R-L+1 should be <=1e7 
  [40,50], [1e12,1e14] etc;

  Approach: Some how if i find prime no upto root of 1e14 then i can map all the composite no upto R using previous
  found prime no.

  so already we know how can we get the prime no upto 1e7 using NloglogN complexity using sieve of eratosthenes;
  so first find the prime no upto root R

  */
 vector<int> getPrime(int n){
    vector<int> prime(n+1,true);
    prime[0]=false,prime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(!prime[i]) continue;
        for(int j=i*i;j<=n;j+=i){
            prime[j]=false;
        }
    }
    return prime;
 }

 vector<int> getPrime(int L,int R){
    vector<int> prime=getPrime(sqrt(R)); //this will give me all the prime no upto sqrt(R)
    vector<int> isPrime(R-L+1,true); // this will map the location of range eg [40,50] 0th 40, 1th 41
    for(int i=2;i*i<=R;i++){
        if(!prime[i]) continue;
        for(int j=max(i*i,((L+i-1)/i)*i);j<=R;j+=i){
            isPrime[j-L]=false;
        }
    }
    if(L==1) isPrime[0]=false;
    return isPrime;
 }
 int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int L,R; cin>>L>>R;
    vector<int> isPrime=getPrime(L,R);
    for(int i=0;i<isPrime.size();i++){
        cout<<L+i<<"-->"<<isPrime[i]<<endl;
    }
    
 return 0;
 }