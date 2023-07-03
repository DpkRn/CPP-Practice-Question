#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
 Node beg;
Node *r;

void insert(){
r->next=(Node*)malloc(sizeof(Node*));
r=r->next;
r->next=NULL;
cout<<"Enter no: ";
cin>>r->data;

}


void print(){
    Node *t;
    t=beg.next;
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
}

void insertFirst(){
    Node *temp;
     temp=(struct Node*)malloc(sizeof(struct Node*));
    cout<<"\nEnter data:";
    cin>>temp->data;
   temp->next=beg.next;
   beg.next=temp;

}

void insertLast(){
    Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node*));
    cout<<"Enter data at last:";
    cin>>temp->data;
    temp->next=NULL;
    Node *t;
    t=&beg;
    while(t->next!=NULL)
    t=t->next;
    t->next=temp;

}
int main(){
beg.next=NULL;
r=&beg;
insert();
insert();
insert();
insert();
print();
insert();
print();
insertFirst();
insertFirst();
insertLast();
insertLast();
print();
}