#include <bits/stdc++.h>

using namespace std;
// Singly LinkList
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtFirst(Node *&Head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = Head;
    Head = newNode;
}
void insertAtLast(Node *&Head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = NULL;
    Node *temp = Head;
    if (Head == NULL)
    {
        Head = newNode;
    }
    else
    {
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

void print(Node *&Head)
{
    Node *temp = Head;
    if (Head == NULL)
        cout << "DATA EMPTY";
    else
    {
        while (temp != NULL)
        {
            cout << "Data:" << temp->data << endl;
            temp = temp->next;
        }
    }
}

void deleteFirst(Node *&Head)
{

    Node *temp = Head;
    if (Head == NULL)
    {
        cout << "Empty data:";
        return;
    }
    Head = temp->next;
    delete (temp);
}
void deleteLast(Node *&Head)
{

    Node *temp = Head;
    if (temp == NULL)
    {
        cout << "Empty data" << endl;
        return;
    }
    if (temp->next == NULL)
    {
        Head = NULL;
    }
    else
    {
        while (temp->next->next != NULL)
            temp = temp->next;
        delete (temp->next);
        temp->next = NULL;
    }
}
int main()
{
    Node *Head = NULL;
    int n;
    int c;
    do
    {
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Traverse" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Option:";
        int c;
        cin >> c;
        switch (c)
        {
        case 1:{
            int ci;
            do
            {
                //   clrscr();
                cout << endl;
                cout << "1. Insert At Last:" << endl;
                cout << "2. Insert At First:" << endl;
                cout << "3. Goto First Menu:" << endl;
                cout << "Enter Option:";

                cin >> ci;
                switch (ci)
                {
                case 1:
                    //  clrscr();
                    cout << "Enter Data To Add Last:";
                    cin >> n;
                    insertAtLast(Head, n);
                    cout << "Inserted At Last successfully !";
                    break;
                case 2:
 // clrscr();
                    cout << "Enter Data To Add First:";

                    cin >> n;
                    insertAtFirst(Head, n);
                    cout << "Inserted At First Successfully";
                    break;
                case 3:
                      break;
                
                 
                default:
                    cout << "Enter right Option:";
                }

            } while (ci != 3);
            break;
        }
        case 2:{
            int ci;
            do
            {
                cout << "1. Delete First Node:"<<endl;
                cout << "2. Delete Last Node:"<<endl;
                cout << "3. Goto First Menu:"<<endl;
                cout << "Enter option:";
                cin >> ci;
                switch (ci)
                {
                case 1:
                    deleteFirst(Head);
                    cout << "Successfully Last Node Deleted";
                    break;
                case 2:
                    deleteLast(Head);
                    cout << "Successfully First Node Deleted";
                    break;
                case 3:
                    break;
                default:
                    cout << "Enter Right Option:";
                }
            } while (ci != 3);
            break;
        }
        case 3:
            cout << endl
                 << "Data Stored !" << endl;
            print(Head);

            break;
        case 4:
            return 0;
            break;
        default:
            cout<<"Enter Right Option:";
        }

    } while (c != 4);
    return 0;
}