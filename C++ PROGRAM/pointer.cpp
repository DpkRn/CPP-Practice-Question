  #include<bits/stdc++.h>
  using namespace std;
  void change(int &x){
    x=7;
  }

  void change1(int *x){
     *x=8;
  }
  int main(){
   int x=6;
   int *ptr=&x;
   cout<<x<<endl;
   change(x);
   cout<<x<<endl;
   change1(ptr);
   cout<<x;

  }