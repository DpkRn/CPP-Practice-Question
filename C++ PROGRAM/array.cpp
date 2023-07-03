#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"Enter 5 no:";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<endl<<"Array"<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }

    cout<<"SHORTED ARRAY IN INCREASING ORDER"<<endl;
    cout<<"---------------------------------"<<endl;

    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    return 0;

}
