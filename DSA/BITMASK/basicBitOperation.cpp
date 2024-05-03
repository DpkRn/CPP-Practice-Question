 #include<bits/stdc++.h>
 using namespace std;
 /*
 Approach : https://youtu.be/XVVhQ4kBTpY

basic approach
    0^x : x  
    x^x:  0 (xor of same no will always be 0)

 lets n=13 
 13: 1101
 check ith set bit: used operator & and <<
                (n&(1<<ith)!=0) then ith bits is 1 else 0
                // or (n>>ith)&1==1 will also work
                implements for 1th bit: 13: 1101
                                         1: 0001
                                         shifting right 0010   13&(1<<1) 0000 then 0
                implements for 2th bit: 13: 1101
                                         1: 0001
                                         shifting right by 2 of 1: 0100   
                                         13&(1<<1) 
                                         1101
                                         0100
                                         -----
                                         0100 not 0 means 1


reverse ith bit: xor used
1^a is used to reverse bits example: bits : 0
                                            0^1 = 1 bits reversed
                                     bits: 1
                                            1^1 = 0 bits reversed
xor upto N: 
prequits: even no of bits gives 0, odd no of bits gives 1
        0 : 0000 ---- 0
        1 : 0001    . 1
        2 : 0010    . 2
        3 : 0011 ----

        4 : 0100 ----
        5 : 0101    .
        6 : 0110    .0
        7 : 0111    .
        8 : 1000 ----

if x^y=k
       then y=x^k; and x=y^k 

 */
 void makeMenu(){
    cout<<" 1. findBinary of N"<<endl;
    cout<<" 2. Check ith Bit set or not"<<endl;
    cout<<" 3. Reverse ith Bit";
    cout<<" 4. find xor upto N numbers"<<endl;
    cout<<" 0. exit"<<endl;
    cout<<" Enter Option: ";
 }
 string findBinary(int n){
    string str="";
    while(n){
        str=n&1==1?('1'+str):'0'+str;
        n>>=1;
    }
    return str;
 }
 void isSetBit(int n){
    cout<<"Binary No: "<<findBinary(n)<<endl;
    int ith;
    cout<<"Enter ith Bit:";
    cin>>ith;
    if(n&(1<<ith)!=0) cout<<"ith bit:"<<1<<endl;
    //if((n>>ith)&1)==1) cout<<"ith bit:"<<1<<endl; will also work
    else cout<<"ith bit:"<<0<<endl;
 }
 void reverseBit(int n){
     cout<<"Binary No: "<<findBinary(n)<<endl;
    cout<<"Enter ith Bit:";
    int ith;
    cin>>ith;
    n=(n^(1<<ith));
    cout<<findBinary(n)<<endl;
 }
 void findXorUpToN(int n){
    if(n%4==0) cout<<"xor upto n:"<<n<<endl;
    else if(n%4==1) cout<<"xor upto n:"<<1<<endl;
    else if(n%4==2) cout<<"xor upto n:"<<n+1<<endl;
    else cout<<"xor upto n:"<<0<<endl;
 }
 int main(){
   // ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    cout<<"enter no:";
    int n;
    cin>>n;
    while(true){
        cout<<endl;
        makeMenu();       
         int option;
        cin>>option;
        switch(option){
            case 1: cout<<findBinary(n)<<endl;
                break;
            case 2: isSetBit(n);
                break;
            case 3: reverseBit(n);
                break;
            case 4: findXorUpToN(n);
                break;
            case 0: return 0;
            default: break;
        }
    }
 return 0;
 }