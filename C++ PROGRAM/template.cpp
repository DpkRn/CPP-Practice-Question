#include<iostream>
using namespace std;
class ArrayList
{

private:
    struct controlblock
    {
        int capacity;
        int *arr_ptr;
    };
    controlblock *s;
    public:
    ArrayList(int capacity)
    {
        controlblock *s=new controlblock;
        s->capacity=capacity;


        s->arr_ptr=new int[capacity];

    }
    void setElementList(int index,int data)
    {
        if(index>=0&&index<s->capacity-1)

            s->arr_ptr[index]=data;
            //cout<<"data added successfully at the index "<<index;
        else
            cout<<"invalid index";
    }

   /* void viewElementList(int index,int &data)
    {

    }
    */

    void viewarrayList()
    {

        for(int i=0;i<s->capacity;i++)
        {
            cout<<endl<<s->arr_ptr[i];
        }
    }
};

int main()
{
    ArrayList list1(4);

    list1.setElementList(0,24);
          list1.setElementList(1,35);
cout<<"Elements Added";

    list1.viewarrayList();
    return 0;
}
