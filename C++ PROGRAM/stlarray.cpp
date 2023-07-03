#include<iostream>
#include<array>
using namespace std;
int main()
{
   array<int,5> a;
   for(int i=0;i<5;i++)
   {
       cin>>a.at(i);
   }

    cout<<"element\n";
    for(int i=0;i<5;i++)
        cout<<a[i]<<endl;

    cout<<"front element:"<<a.front()<<endl<<"back element:"<<a.back()<<endl;

    return 0;

}
