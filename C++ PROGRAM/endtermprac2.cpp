#include<iostream>
using namespace std;
template<typename T>
void print(T value)
{
    cout<<"value of T"<<value<<endl<<"its first call"<<endl;
}

template <typename T>
void print(T* value)
{
    cout<<"value of T"<<*value<<endl<<"its second call"<<endl;
}
int main()
{
    int a=5;
    print(a);
    cout<<endl;
    print(&a);
    return 0;
}
