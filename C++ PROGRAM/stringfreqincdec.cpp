#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Enter sentance:";
    string str;
    // string str="mohan sohan rohan deepak sohan mohan deepak deepak";
    getline(cin, str);
    stringstream ss(str);

    map<char, int> m;
    char temp;
    while (ss >> temp)
    {
        if (m.find(temp) != m.end())
        {
            m[temp]++;
        }
        else
        {
            m[temp] = 1;
        }
    }
    vector<pair<char, int>> v;

    for (pair<char, int> p : m)
        v.push_back(make_pair(p.first, p.second));

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i; j < v.size(); j++)
        {
            if (v[i].second < v[j].second)
            {
                pair<char, int> temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
}