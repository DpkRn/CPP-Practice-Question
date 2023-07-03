#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string unique(string s)
{
    string str;
    int len = s.length();
 
    // loop to traverse the string and
    // check for repeating chars using
    // IndexOf() method in Java
    for(int i = 0; i < len; i++)
    {
         
        // character at i'th index of s
        char c = s[i];
 
        // If c is present in str, it returns
        // the index of c, else it returns npos
        auto found = str.find(c);
        if (found == std::string::npos)
        {
             
            // Adding c to str if npos is returned
            str += c;
        }
    }
    sort(str.begin(),str.end());
    return str;
}



int main(){
     cout<<"Enter String:";
     string str;
     string temp;
     cin>>temp;
     str=temp;
     temp=unique(str);
     string as="";
     sort(temp.begin(),temp.end());
        for(int i=0;i<temp.length();i++){
          for(int j=0;j<str.length();j++){
            if(temp[i]==str[j]){
                int lind=1;
               for(int k=j;k<str.length();k++){
                  as=as+str.substr(j,lind++);
                }
 
            }
          }
       }   
      cout<<endl<<"Astrong string:"<<as;
     return 0;
}