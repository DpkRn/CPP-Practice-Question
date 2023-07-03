#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{

    ifstream fin;
    fin.open("program.txt");
    if(!fin.is_open())
    {
        cout<<"error while opening";
    }
    int lc=0;

    int wc=0;
    int cs=0;
     string s;
    while(fin.good())
    {
        getline(fin,s);


        lc++;
        cs=cs+s.length();

         for(int i=0;i<=s.length();i++)
          {
            if(isspace(s[i]))
            wc++;
          }
        cout<<endl;
        cout<<s;
    }
    cout<<endl<<"no of character:"<<cs;
    cout<<endl<<"no of words:"<<wc+1;
    cout<<endl<<"no of lines:"<<lc;
    return 0;
};
