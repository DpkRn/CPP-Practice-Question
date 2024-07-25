 #include<bits/stdc++.h>
 #define int long long int
 using namespace std;
 const int mod=(int)(1e9+7);
 const int INF = 9e15;
 vector<int> countPrimeFactor(int n){
    vector<int> prime(n+1,1);
    vector<int> factorCount(n+1,0);
    prime[1]=0; prime[0]=0;
    for(int i=2;i<=n/2;i++){
        if(prime[i]==false) continue;
            for(int j=2*i;j<=n;j+=i){
                prime[j]=false;
                factorCount[j]++;
            }
    }
    for(auto &it:factorCount) if(it==0) it=1;
    
    return factorCount;
 }
 int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> factorCount=countPrimeFactor(20);
    int i=0;
    for(auto it:factorCount) cout<<i++<<"-->"<<it<<endl;
 return 0;
 }