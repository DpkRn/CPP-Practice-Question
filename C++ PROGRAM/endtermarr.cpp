#include<iostream>
using namespace std;
class Array
{
private:
    int *arr;
    int size;
public:
    Array(int s)
    {
        size=s;
        arr=new int[size];
    }
    void getElements()
    {
        for(int i=0;i<size;i++)
        {
            cout<<"enter element:";
            cin>>arr[i];
        }
    }

    int getSmallElements()
    {
        int smallest=arr[0];
        for(int i=1;i<size;i++)
        {
            if(arr[i]<smallest)
                smallest=arr[i];
        }
        return smallest;
    }

};
int main()
{
    cout<<"Enter size of array:";
    int size;
    cin>>size;
    Array a(size);
    a.getElements();
    int small=a.getSmallElements();
    cout<<small;
}
