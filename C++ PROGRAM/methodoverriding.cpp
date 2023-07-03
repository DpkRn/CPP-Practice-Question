#include<iostream>
using namespace std;
class A
{
public:
   virtual void fun1()
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
     cout<<"its child class method 2";
 }

 void fun3()
 {
     cout<<"its child not overrided third method";
 }

};

int main()
{
   A *p;
   B b1;
   p=&b1;
   p->fun1();
   return 0;

}
