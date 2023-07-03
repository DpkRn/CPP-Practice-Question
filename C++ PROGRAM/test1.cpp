#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char *ptr="Pointer in c",arr[15];
    arr[15]=*ptr;
    printf("%c",arr[16]);
}
