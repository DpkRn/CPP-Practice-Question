//leetcode 29.
//divide No without using multiplication division and mod operator //58 5 give ans close to 0;
#include<bits/stdc++.h>
using namespace std;
int divide(int dd,int ds){
    bool isPositive=(dd<0==ds<0);
    dd=abs(dd);
    ds=abs(ds);
    int ans=0;
   while(dd>=ds){
    int q=0;
    while(dd>(ds<<q+1))
        q++;
    ans=ans+(1<<q);
    dd-=(ds<<q);
   }
   if(ans==(1<<31)&&isPositive) return INT_MAX;
   return ans=isPositive?ans:-ans;
}

int main(){
    cout<<divide(-58,5);
    return 0;
}

//58 -> 11*5+3
//58 -> (111)base2*5+3
//58 -> (2^3 + 2^1+ 2^0)*5+3
//   -> (2^3*5)+(2^1*5)+(2^0*5)+3
//so 
//(2^0)*5=5
//(2^1)*5=10
//(2^2)*5=20
//(2^3)*5=40
//(2^4)*5=80  x
//58-(5<<3)=18 so ans=1<<3=8
//now we have remaining 18 to cover continue it untill and unless dividend not less than divisor

//(2^0)*5=5
//(2^1)*5=10
//(2^2)*5=20 X
//18-(5<<1)=8 ans=8+(1<<1)=8+2=10

//remaining 18-10=8

//(2^0)*5=5
//(2^1)*5=10 x
//8-5=3 ans=10+1<<0=10+1=11 that is our ans because remaining part is less than 5
