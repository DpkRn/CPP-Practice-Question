//write a program to find the frequency of word in  a sentance
#include<iostream>
#include<sstream>
#include<vector>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    //cout<<"Enter sentance:";
    string str="apple banana apple grapes banana grapes apple mango";
    //getline(cin,str);
    stringstream ss(str);
    vector<string> words;
    string buff;
    while(ss>>buff){
        int flag=0;
        for(int j=0;j<words.size();j++){
            if(buff==words[j]){
                flag=1;
                break;
            }
                
         }
        if(flag==0)
        words.push_back(buff);
    }
    ss.seekg(0);
    cout<<ss.tellg();
    stringstream ss1(str);

    cout<<ss1.tellg()<<endl;
    int f[words.size()];
    for(int i=0;i<words.size();i++){
        int c=0;
        ss1<<str;
        while(ss1>>buff){
           if(buff==words[i])
           c++;
        }
        ss1.clear();
        f[i]=c;
    }

    for(int i=0;i<words.size();i++)
    cout<<words[i]<<"-->"<<f[i]<<endl;


    return 0;


}