#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{

ofstream file;

file.open("newfile1.txt"); //in one file ofstream object you can open jst one file.if file already existed then all data will be
//deleted because file automatically open in ios::out form
cout<<"new file1 has been created\n";
//getch();


file<<"how are you";

file.close();

getch();

}
