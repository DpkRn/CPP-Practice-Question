#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;
int main()
{

    cout << "Enter string:";
    string str;
    cin >> str;
    int l = str.length();
    int astr[l];
    for (int i = 0; i < l; i++)
    {
        int c;
        c = str[i];
        astr[i] = c;
    }
    string rstr = "";

    // int l=str.length();
    // int astr[l];
    for (int i = l - 1; i >= 0; i--)
    {
        rstr += str[i];
    }
    int rastr[l];
    for (int i = 0; i < l; i++)
    {
        int c;
        c = rstr[i];
        rastr[i] = c;
    }
    int absastl[l - 1];
    for (int i = 0; i < l - 1; i++)
    {
        absastl[i] = abs(astr[i] - astr[i + 1]);
    }

    //

    int absrstl[l - 1];
    for (int i = 0; i < l - 1; i++)
    {
        absrstl[i] = abs(rastr[i] - rastr[i + 1]);
    }
    int flag = false;
    for (int i = 0; i < l - 1; i++)
    {
        if (absastl[i] != absrstl[i])
        {
            flag = true;
            break;
        }
    }

    for(int i=0;i<l-1;i++){
      cout<<" "<<absastl[i];
    }

    cout<<endl;
    for(int i=0;i<l-1;i++){
      cout<<" "<<absrstl[i];
    }

    if (flag == false)
    {
        cout << endl<<"FUNNY('_') ";
    }else
    cout << endl<<"NOT FUNNY('_') ";


return 0;
}