 #include<bits/stdc++.h>
 using namespace std;
 class num{
    private: map<int,int> map;
    public:
    int fib(int n){
        if(n<=1){
            return n;
        }
        if(map[n]>0)
        return map[n];

        return map[n]=fib(n-1)+fib(n-2);
    }
 };
 int main(){
 cout<<"enter term:";
 int n;
 cin>>n;
 num b;
 cout<<b.fib(n);
 return 0;
 }