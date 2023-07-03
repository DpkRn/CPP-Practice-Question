#include<iostream>
using namespace std;
int main()
{

    cout<<"enter size of array:";
    int m,n;
    cin>>m>>n;
    int a[m][n];

   cout<<" Enter Matrix"<<endl;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
         cin>>a[i][j];

         for(int i=0;i<m;i++)
             for(int j=0;j<n-1;j++)
         {     for(int k=j;k<n;k++){
                if(a[i][j]>a[i][k])
               {
                int temp=a[i][j];
                a[i][j]=a[i][k];
                a[i][k]=temp;
               }
             }
         }
     cout<<" Sorted  Matrix"<<endl;
    for(int i=0;i<m;i++)
      {

        for(int j=0;j<n;j++)
         cout<<"  "<<a[i][j];
    cout<<endl;
      }
      return 0;

}
