#include<iostream>
using namespace std;
class Box
{
private:
    int l,b,h;
public:
    void setDim(int l,int b,int h)
    {
        this->l=l;
        this->b=b;
         this->h=h;
    }
    void showDim()
    {
        cout<<"length="<<l<<endl;
        cout<<"width="<<b<<endl;
        cout<<"heigth="<<h<<endl;
    }
};

int main()
{

    Box b1;
    b1.setDim(2,4,6);
    b1.showDim();


    return 0;
}
