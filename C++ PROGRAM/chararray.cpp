#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char fname[20],lname[20];
    cin>>fname>>lname;

     cout<<"First name:"<<fname<<endl;

     cout<<"Last name:"<<lname<<endl;
     char result[20];

     for(int i=0;i<strlen(fname);i++)
        result[i]=fname[i];

    // cout<<"result:"<<result<<endl;
    result[strlen(fname)]=' ';
      int c=strlen(fname)+1;
      for(int i=0;i<strlen(lname);i++)
      result[c++]=lname[i];

      cout<<"full name:"<<result<<endl;










    getch();
    return 0;


}
