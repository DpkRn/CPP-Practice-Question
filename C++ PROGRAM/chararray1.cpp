#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[5][10];
     for(int i=0;i<5;i++)

        cin>>s[i];



    for(int i;i<5;i++)
    {

        for(int j=i;j<5;j++)
        { cout<<j;
            if((strcmp(s[i],s[j]))>0)
            { cout<<s[i]<<" is greate than "<<s[j]<<endl;
                char temp[10];
              strcpy(temp,s[i]);
              strcpy(s[i],s[j]);
              strcpy(s[j],temp);

            }
        }
    }


    for(int i=0;i<5;i++)
    {
        cout<<s[i]<<endl;
    }


     return 0;

}
