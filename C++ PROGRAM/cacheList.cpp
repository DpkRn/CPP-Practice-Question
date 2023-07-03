#include<iostream>
#include<list>
#include<conio.h>
using namespace std;


int main(){
    list<int> cache={5,3,2,1,4};
    cout<<"Enter test case:";
    int T;
    cin>>T;
    while(T--){
    cout<<enld<<"Enter the Least number:";
    int lru;
    cin>>lru;
    list<int>::iterator it=cache.begin();
    int flag=false;
    while(it!=cache.end()){
       
      if(*it==lru){
        cache.erase(it);
        cache.push_front(lru);
        flag=true;
       }
       
         it++;
    }

    if(flag==false)
       { 
        cache.pop_back();
        cache.push_front(lru);

       }
cout<<"LHU added successfully!"<<endl;
    for(auto x:cache){
        cout<<x<<" ";
    }
    }
return 0;    
}
