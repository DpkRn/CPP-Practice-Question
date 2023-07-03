#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream inf("abc123.txt");
    inf<<"good"<<endl;
    inf.close();
    return 0;
}
