#include<iostream>
using namespace std;
template <class T>
class Number
{
    T num;
public:
    void showNo()
    {
        cout<<"no is "<<num;
    }
    Number(T n)
    {
        num=n;
    }
};

int main()
{
    Number<int> m(4);
    m.showNo();
    cout<<endl;
    Number<float> f(3.5);
    f.showNo();
    return 0;
}
