// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool isPrime(int d){
    
    for(int i=2;i<=d/2;i++){
        if(d%i==0)
        return false;
    }
    return true;
}
int findNext(int x){
    while(x++){
        if(isPrime(x))
        return x;
    }
    return 0;
}
int main() {
   int n;
   cout<<"Enter No:";
   cin>>n;
   
  int p=0;
  cout<<endl;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i;j++){
          cout<<" ";
      }
      for(int k=1;k<=min(i,k);k++){
         
          int r=findNext(p+1);
          cout<<r<<" ";
          p=r;
      }
      cout<<endl;
  }

    return 0;
}