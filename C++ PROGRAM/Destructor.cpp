#include<iostream>
#include<conio.h>
using namespace std;
class Complex{

int a,b;
public:
    Complex()
    {
        cout<<"its construtor";
    }

    ~Complex()
    {

        cout<<"\nits Destructor";
    }



};
int main()
{
    Complex a;
    getch();
    return 0;
}
