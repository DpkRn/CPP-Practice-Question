#include<iostream>
using namespace std;
class B;
class A
{
private:
    int a;
public:
    void setData(int x)
    {
        a=x;
    }
    void showData()
    {
        cout<<"a="<<a<<endl;
    }
    friend int sumofa(A,B);   // Friend function can access the private members of one or more classes to which its friend
};
class B
{
  int b;
  public:
 void setData(int y)
    {

        b=y;
    }
    void showData()
    {
        cout<<"b="<<b<<endl;
    }
    friend int sumofa(A,B);   // Friend function can access the private members of one or more classes to which its friend
};

int sumofa(A x,B y)
{
   int temp;
    temp=x.a+y.b;
    return temp;
}

int main()
{
    A a1;
    B a2;
    a1.setData(3);
    a2.setData(4);
    int m=sumofa(a1,a2);
    cout<<"sum of a="<<m;
    return 0;
}
