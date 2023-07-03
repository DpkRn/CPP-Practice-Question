#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    static int count;
    public:
        void setdata(int a,int b)
        {
            real=a;img=b;
        }
        void showdata()
        {

            cout<<real<<"+"<<img<<"i"<<endl;
        }

        Complex()
        {
            count++;
        }
      static int getcount()
      {
          return count;
      }
};

int Complex::count=0;
int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,5);
    c1.showdata();
    int count=Complex::getcount();
    cout<<"no of objects is:"<<count;
    return 0;
}
