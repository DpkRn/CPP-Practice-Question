#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
   string ch;
    cout<<"enter your sentance"<<endl;
    getline(cin,ch);
    int l=ch.length();
    cout<<"length of string="<<l<<endl;
    int count=0;
 for(int i=0;i<l-1;i++)
  {
      if(isspace(ch[i]))
        count++;

  }


  cout<<"no of words in string="<<count+1<<endl;

    return 0;


}
