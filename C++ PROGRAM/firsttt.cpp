#include<iostream>
using namespace std;
int main()
{
    int a[5]={20,18,99,5};
    for(int i=0;i<4;i++)
    cout<<a[i]<<endl;
    int pos;
cout<<"Enter your no to insert at last:";
    int n;
    cin>>n;
    for(int i=0;i<5;i++){
        if(a[i]=='\0')
        {
            a[i]=n;
            pos=i;

            break;
        }
    }

   for(int i=0;i<5;i++)
    cout<<a[i]<<endl;

    cout<<endl<<n<<" has inserted successfully at "<<(pos+1) <<"position"<<endl;
    return 0;
}
