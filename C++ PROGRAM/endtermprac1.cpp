//write a program to demonstrate friend function
//here i m adding two complex no using friend function
#include<iostream>
using namespace std;
class Complex
{
    int a,b;
public:
    void setData(int x,int y){a=x;b=y;}
    void showData(){cout<<a<<"+"<<b<<"i";}
   friend Complex sum(Complex,Complex);
};
 Complex sum(Complex c1,Complex c2)
    {Complex temp;
    temp.a=c1.a+c2.a;
    temp.b=c1.b+c2.b;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.setData(3,5);
    c2.setData(4,5);
    c3=sum(c1,c2);
    c3.showData();
    return 0;
}
