#include<iostream>
#include<conio.h>
#include<fstream>

using namespace std;
int main()
{
    ifstream fin;
    fin.open("newfile1.txt");
    char ch;
   while(!fin.eof())
   {
    ch=fin.get();
    getch();
    cout<<ch;
   }
    fin.close();
}
