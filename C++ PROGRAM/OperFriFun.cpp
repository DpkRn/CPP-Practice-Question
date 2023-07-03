//operator overloading using friend function
#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
        void setData(int x,int y)
        {
            real=x;img=y;
        }
        void showData()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }

       friend Complex operator+(Complex,Complex);
};

Complex operator+(Complex d,Complex m)
       {
           Complex temp;
           temp.real=m.real+d.real;
           temp.img=m.img+d.img;
           return temp;
       }

int main()
{
    Complex c1,c2,c3;
    c1.setData(2,3);
    c2.setData(5,3);
    c3=c1+c2;
    c3.showData();
    return 0;
}
