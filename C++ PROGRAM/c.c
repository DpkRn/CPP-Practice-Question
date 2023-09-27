#include <stdio.h>
#include<string.h>
//#include<bits/stdc++.h>
//#include<iostream>

int main()
{
    char ch2[]="hellp";
    char *ch1="hello";
    
    char ch3[5]="hellq";
    
    
    
    printf("%s %s %s",ch1,ch2,ch3);
    printf("\n");
    printf("%ld %ld %ld ",sizeof(ch1),sizeof(ch2),sizeof(ch3));

    return 0;
}