#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<cstring>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node beg,*r;
void InsertAtBeg(){
    node *temp=beg.next;
    beg.next=(struct node*)malloc(sizeof(struct node*));
    cout<<"Enter Data:";
    cin>>beg.next->data;
    beg.next->next=temp;
    
     cout<<endl<<"Inserted Successfully!"<<endl;
}

void InsertAtLast(){
    struct node *temp=(struct node*)malloc(sizeof(struct node*));
    cout<<"Enter Data:";
    cin>>temp->data;
     r=&beg;
    while(r->next!=NULL){
        r=r->next;
    }
    r->next=temp;
    temp->next=NULL;
    cout<<"Inserted Successfully!"<<endl;
}

void Traverse(){
struct node *temp=beg.next;
if(temp==NULL){
    cout<<"Empty Data:"<<endl;
    }
    else
    {
        while(temp!=NULL){
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
        cout<<endl<<"End:"<<endl;
    }
}
void deleteFirstNode(){
    if(beg.next==NULL){
        cout<<"Empty !";
    }else{
        struct node *temp=beg.next;
        beg.next=beg.next->next;
        free(temp);
    }
}

void deleteLastNode(){
    struct node *temp;
    temp=&beg;
    if(temp->next==NULL)
    cout<<"Empty";
    else
    while(temp->next->next!=NULL){
    temp=temp->next;
    }
     free(temp->next->next);
    temp->next=NULL;
   
    cout<<"Successfully deleted!";
}

int main(){
int m;

beg.next=NULL;
r=&beg;
int k=1;
while(k==1){
 cout<<"      Main Menu      "<<endl;
 cout<<"1. Insert:"<<endl;
 cout<<"2. Delete:"<<endl;
 cout<<"3. Search:"<<endl;
 cout<<"4. Traverse:"<<endl;
 cout<<"5. Update:"<<endl;
 cout<<"6. Exit:"<<endl;
 cout<<"Choose any option:";
 int op;
 cin>>op;
 switch (op){
    case 1:
    {
        cout<<"1. Insert At Begining:"<<endl;
        cout<<"2. Insert At End:"<<endl;
        cout<<"3. Insert At Required Position:"<<endl;
        cout<<"4. To go at first Menu"<<endl;
        cout<<"Enter Your Option:";
        int opt;
        cin>>opt;
        switch(opt){
            case 1: InsertAtBeg();
                     break;
            case 2: InsertAtLast();
                    break;
            default: cout<<"You have choosen Wrong Option";
        }
    }    
        break;
    case 2:
    {
        cout<<"1. Delete At Begining:"<<endl;
        cout<<"2. Delete At End:"<<endl;
        cout<<"3. Delete At Required Position:"<<endl;
        cout<<"4. To go at first Menu"<<endl;
        cout<<"Enter Your Option:";
        int opt;
        cin>>opt;
        switch(opt){
            case 1: deleteFirstNode();
                     break;
            case 2: deleteLastNode();
                    break;
            default: cout<<"You have choosen Wrong Option";
        }
    }
        break;
    case 3:
    {

    }
    case 4:
    {
        Traverse();
        break;
    }
    case 5:
        return 0;

    default: cout<<"You choosen Wrong option";

    
} 

}


}