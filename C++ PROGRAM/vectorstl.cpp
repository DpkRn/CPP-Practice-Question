#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v1;
v1.push_back(20);
v1.push_back(30);
v1.push_back(50);
v1.push_back(60);
v1.push_back(70);
cout<<"size:"<<v1.size()<<endl;
cout<<"capacity:"<<v1.capacity()<<endl;
v1.pop_back();
cout<<"size:"<<v1.size()<<endl;
cout<<"capacity:"<<v1.capacity()<<endl;

cout<<v1[3];
return 0;


}
