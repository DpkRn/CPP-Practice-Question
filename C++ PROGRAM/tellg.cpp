#include<iostream>
#include<fstream>
using namespace std;
int main()

{   ofstream fout;
fout.open("abc.txt");
fout<<"how are you";
fout.close();
    ifstream fin;
    int pos;
    fin.open("abc.txt");
    if(!fin.is_open())
        cout<<"Error while opening"<<endl;
    else
       {
    char ch;
    fin>>ch;
    pos=fin.tellg();
    cout<<"position of cursor:"<<pos;
       }

}
