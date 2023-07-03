#include<iostream>
#include<sstream>
#include<map>
using namespace std;
int main(){
    string str="apple banana apple grapes banana grapes apple mango";
    stringstream ss(str);
    cout<<ss.str()<<endl;
    map<string,int> fr;
    string buff;
    
    while(ss>>buff){
        int c=0;
      map<string,int>::iterator p=fr.begin();
      while(p!=fr.end()){
       if(buff==p->first){
         c++;
         p++;
       }   
       else
       p++;     
        
    }
        fr.insert(pair<string,int>(buff,c));
       
    }

    map<string,int>::iterator p=fr.begin();
    while(p!=fr.end()){
        cout<<p->first<<"-->"<<p->second<<endl;
        p++;
    }
    return 0;

}
