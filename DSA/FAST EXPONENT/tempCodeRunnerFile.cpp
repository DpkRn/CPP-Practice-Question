 ll power(int x,int y){
    int res=1;
    if(x==0) return 0;
    x=x%mod;
    while(y>0){
        if(y&1) res*=x;
        y=(y>>1);
        x=(x*x)%mod;
    }
    return res;
}