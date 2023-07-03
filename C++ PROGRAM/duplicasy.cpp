#include <bits/stdc++.h>
using namespace std;
string unique(string s)
{
    string str;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
         
   
        char c = s[i];
 
   
   
        auto found = str.find(c);
        if (found == std::string::npos)
        {
             
         str += c;
        }
    }
    return str;
}
 
// Driver code
int main()
{
     
    // Input string with repeating chars
    string s = "geeksforgeeks";
 
    cout << unique(s) << endl;
}