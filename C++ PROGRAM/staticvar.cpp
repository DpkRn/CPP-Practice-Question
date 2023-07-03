#include<iostream>

#include<string>
using namespace std;
class Account
{
    int balance;
    static int roi;
    char name[20];

public:
    void setBalance(int a)
    {
        balance=a;
    }
    void setRoi(int r)
    {
        roi=r;

    }

    void setName()
    {

       cout<<"Enter name:";
       cin>>name;
    }

    void showBalance()
    {
        cout<<"Balance="<<balance<<endl;
    }
    void showRoi()
    {
       cout<<"Roi="<<roi<<endl;
    }
    void showName()
    {
        cout<<"Name="<<name<<endl;
    }
};
 Account::static Roi=50;

int main()
{
    Account a1;
    a1.setBalance(500);
    a1.setRoi(300);
    a1.setName();
    a1.showBalance();
    return 0;


}
