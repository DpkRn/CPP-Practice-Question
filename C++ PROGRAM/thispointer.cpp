#include<iostream>
using namespace std;
class A
{
public:
   void fun1()
   {
       cout<<"its parent class method1";

    }
    void fun2()
    {
        cout<<"its parent class method2";
    }
   void funt()
   {
       cout<<"its parent folder not overrided";
   }
};

class B:public A
{
public:
 void fun1()
 {
    cout<<"its child class method1";
 }

 void fun2()
 {
     cout<<"its child class meth/od 2";
 }

 void fun3()
 {
     cout<<"its child not overrided third method";
 }

};

int main()
{
    B b;
    A a;
    a.fun1();
    cout<<endl;
    b.funt();
    cout<<endl;
    b.fun1();

}
