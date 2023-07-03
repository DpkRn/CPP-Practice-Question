#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> customer{
        {1,"Deepak"},{3,"Rajesh"},{2,"Rahul"}
    };
   customer.insert(pair<int,string>(4,"ramesh"));
   customer.insert(pair<int,string>(4,"ramesh"));
   cout<<"Enter key and name";
   int n;
   string str;
   cin>>n>>str;
   customer.insert(pair<int,string>(n,str));
    map<int,string> ::iterator p=customer.begin();
    while(p!=customer.end()){
        cout<<p->second<<endl;
    p++;
    }
    return 0;
}