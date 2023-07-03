
//write a program to count the word no and store all word into a array string
#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter string:";
    string str;
    getline(cin,str);
    stringstream ss(str);
    string buff;
    int c=0;
    vector<string> words;
    while(ss>>buff){
     words.push_back(buff);
     c++;
    }
    cout<<"Words in string:"<<endl;
    for(int i=0;i<words.size();i++){
        cout<<words[i]<<endl;
    }
    cout<<"Total no of words:"<<c;
    return 0;
}
