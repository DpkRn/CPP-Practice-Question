#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    char m[100];
ifstream fin;
fin.open("program.txt");
if(!fin.is_open())
    cout<<"error while opening";
char ch;
int i=0;
while(fin.good())
{
    ch=fin.get();
    m[i]=ch;
    i++;

}
cout<<m;
fin.close();
}
