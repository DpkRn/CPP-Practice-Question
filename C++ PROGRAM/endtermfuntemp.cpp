#include<iostream>
using namespace std;
template<typename T>
void print(T value)
{
    cout<<"value of T"<<value<<endl<<"its first call"<<endl;
}

template <typename T>
void print(T value1,T value2 )
{
    cout<<"value of T"<<value1<<"  "<<value2<<endl<<"its second call"<<endl;
}
int main()
{
    int a=5;
    int b=3;
    print(a);
    cout<<endl;
    print(a,b);
    return 0;
}
