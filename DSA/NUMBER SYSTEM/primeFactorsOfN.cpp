 #include<bits/stdc++.h>
 #define int long long int
 using namespace std;
 const int mod=(int)(1e9+7);
 const int INF = 9e15;
 /*
 //Brute force O(NLogN)
 vector<pair<int,int>> getPrimeFactors(int n){
    vector<pair<int,int>> factors;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            factors.push_back({i,cnt});
        }
    }
    return factors;
 }
 */
//Optimised to O(\/N logn)
vector<pair<int,int>> getPrimeFactors(int n){
    vector<pair<int,int>> factors;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            factors.push_back({i,cnt});
        }
    }
    if(n>1) factors.push_back({n,1});
    return factors;
 }
 int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int,int>> factors=getPrimeFactors(100);
    for(auto it:factors){
        cout<<it.first<<"--"<<it.second<<endl;
    }
 return 0;
 }