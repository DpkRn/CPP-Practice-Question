#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

vector<string> removeDup(vector<string> name){
    // vector<string> key;
    // key.push_back("");
    // for(int i=0;i<name.size();i++){
    //     int flag=0;
    //     for(int j=0;j<key.size();j++){
    //       if(name[i]==key[j]){
    //       flag=1;
    //       }
          
    //     }
    //      if(flag==0){
    //         key.push_back(name[i]);
    //        }
    // }

    vector<string> key;
    for(int i=0;i<name.size();i++){
        if(find(key.begin(),key.end(),name[i])==key.end())
        key.push_back(name[i]);
    }

    //
    return key;
}
int main(){
    cout<<"Enter string:";
    string str;
    vector<string> name;
    for(int i=0;i<5;i++){
     cin>>str;
     name.push_back(str);
    }
    
    vector<string> key;
    key=removeDup(name);
    cout<<"unique names:"<<endl;
    if(!key.empty()){
    for(int i=0;i<key.size();i++)
    cout<<key[i]<<endl;
    }
    else
    cout<<"Key container has no any value:";
    return 0;
}