#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("test1.txt");
    fout<<"hello how r u"<<endl;
    fout<<"how is it going";
    fout.close();
    ifstream fin;
    fin.open("test1.txt");
    if(fin.is_open())

        cout<<"opened successfully"<<endl;
        else
            cout<<"not opened successfully";

string str;
while(!fin.eof())
{
    getline(fin,str);
    for(int i=str.length()-1;i>=0;i--)
    cout<<str[i];
     cout<<endl;
}

for(int i=0;str[i]!='\0';i++)
    cout<<str[i];
}
