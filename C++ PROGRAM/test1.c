#include<stdio.h>
//#include<iostream>
#include<conio.h>
#include<string.h>
//using namespace std;
struct p{
int x;
char y;
};
int main()
{
struct p p1[]={1,92,3,94,5,94};
struct p *ptr1=p1;
int x=sizeof(p1)/3;

if(x==(sizeof(int )+sizeof(char)))
   printf("%d",ptr1->x);
   else
    printf("false");
}
