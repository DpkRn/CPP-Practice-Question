#include<iostream>
#include<string>
using namespace std;
int main()
{

    string s;
    cout<<"enter a line:";
    getline(cin,s);
    int l=s.length();
    for(int i=l-1;i>=0;i--)
    {
        cout<<s[i];
    }
    return 0;
}
