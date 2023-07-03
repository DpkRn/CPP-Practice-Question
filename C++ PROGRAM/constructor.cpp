#include<iostream>
using namespace std;
class Complex
{
    int a,b;
public:
    Complex()
    {
        cout<<"its constructor\n"; //Default constructor : if programer dont defined it then it automatically run by th compiler

    }

    Complex (int x )
    {
        a=x;
        cout<<"runs one arguement constructor"; //Parametrize constructor: it is called according to the no of parameter
    }

    Complex(int x,int y)       //if more than one constructor are defined in single class then its called then its called constructor overloading

    {
        a=x;
        b=y;
        cout<<"its two arguement constructor";

    }

    Complex(Complex &n)    //this called copy constructor it is used when if we want to copy the content of the another obeject at the time of instantiating the constructor
    {
        a=n.a;
        b=n.b;
    }
    void showComplex()
    {
        cout<<a<<"+"<<b<<"i";
    }
};

int main()
{

    Complex a,b(5),c(3,4);
    Complex d(c);
    c.showComplex();
    cout<<endl;
    d.showComplex();

    return 0;
}
