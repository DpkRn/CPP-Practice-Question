//write a program to add to complex no using operator overloading
#include<iostream>
using namespace std;
class Complex{
int a,b;
public:
    void setData(int x, int y)
    {
        a=x;b=y;
    }
    void showData()
    {
        cout<<a<<"+"<<b<<"i";
    }

    Complex operator+( Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;

    }

    //unary operator overloading that not take arguement;

    Complex operator-()
    {
      Complex temp;
      temp.a=-a;
      temp.b=-b;
      return temp;
 //this function will return the negation of complex no
    }

    //overloading prefix and postfix opperator

    Complex operator++()
    {
        Complex temp;
        temp.a=++a;
        temp.b=++b;
        return temp;
        //this will work as a prefix operator
    }

    Complex operator++(int)
    { //int arguement tells the compiler that its postfix operator overloaded
        Complex temp;
        temp.a=a++;
        temp.b=b++;
        return temp;
    }

};

int main()
{
    Complex c1,c2,c3;
    c1.setData(2,3);
    c2.setData(3,4);
    //c3=c1.operator+(c2); this is also a right statement;
    c3=c1+c2;

    c3.showData(); //5+7i
    cout<<"\nnegation of c3:\n";
    Complex c4=-c3; //Complex c4=c3.opeator-();
    c4.showData(); //-5+-7i

    Complex c5=++c1;
    c1.showData();//3+4i
    c5.showData();//3+4i

    Complex c6=c1++;
    c1.showData(); //4+5i
    c6.showData();//3+4i

    return 0;

}
