#include<bits/stdc++.h>
using namespace std;

int getPower(int a,int b){
    //base case
 if(b==0)
 return 1;//base case
 if(b==1)
 return a;
 
 if (b%2 == 0)
    return getPower(a,b/2)*getPower(a,b/2);  //if b is even then 3^(5/2)*3^(5/2)
    else
    return a*getPower(a,b/2)*getPower(a,b/2); //if b is odd then 3*3^(5/2)*3^(5/2)
}

int main(){
    int a=3;
    int b=5;
int res=getPower(a,b);
cout<<res<<" result";
return 0;
}


//its not optimise way
// int getPower(int a,int b){
   
//     if(b==0)
//     return 1;
//     return a*getPower(a,b-1);
//     }
// int main(){
//     int a=3;
//     int b=4;
// int res=getPower(a,b);
// cout<<res<<" result";
// return 0;
// }
//3,4
//3,3
//3,2
//3,1
//3,0