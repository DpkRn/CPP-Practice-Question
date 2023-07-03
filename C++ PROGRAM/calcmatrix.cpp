#include<iostream>
using namespace std;


int main()
{
    int fr,fc,sr,sc;
    cout<<"Enter row and column of first matrix:";
    cin>>fr>>fc;
     int m1[fr][fc];
      cout<<endl<<"Enter "<<fr*fc<<" Element"<<endl;
    for(int i=0;i<fr;i++){
        for(int j=0;j<fc;j++){
            cin>>m1[i][j];
        }
    }
    cout<<endl<<"Enter row and column of second matrix:";
    cin>>sr>>sc;

    int m2[sr][sc];
   cout<<endl<<"Enter "<<sr*sc<<" Element"<<endl;
   for(int i=0;i<sr;i++)
      {
          for(int j=0;j<sc;j++)
          cin>>m2[i][j];
      }
    cout<<endl<<"First Matrix:"<<endl;
     for(int i=0;i<fr;i++){
        for(int j=0;j<fc;j++){
            cout<<m1[i][j]<<"  ";
        }
        cout<<endl;
    }
     cout<<endl<<"Second Matrix:"<<endl;

    for(int i=0;i<sr;i++){
        for(int j=0;j<sc;j++){
            cout<<m2[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<endl<<"Addition of two matrix:"<<endl;
      if(fr==sr&&sc==fc)
         {
             int res[fr][fc];
              for(int i=0;i<fr;i++){
              for(int j=0;j<fc;j++){
              res[i][j]=m1[i][j]+m2[i][j];
             }
           }
            for(int i=0;i<fr;i++){
        for(int j=0;j<fc;j++){
            cout<<res[i][j]<<"  ";
        }
        cout<<endl;
    }

         }
      else
        cout<<"Addition cant be performed"<<endl;

      cout<<endl<<"Multification of two matrix:"<<endl;
      if(fc==sr)
          {  int res[fr][sc];
              for(int i=0;i<fr;i++){

                for(int j=0;j<fc;j++){
                        int sum=0;
                         for(int k=0;k<fc;k++){
                          sum=sum+(m1[i][k]*m2[k][j]);

                         }
                         res[i][j]=sum;
                }
              }

              for(int i=0;i<fr;i++){
        for(int j=0;j<sc;j++){
            cout<<res[i][j]<<"  ";
        }
        cout<<endl;
    }
          }
      else
        cout<<"multiplication cant be performed"<<endl;

        return 0;
}
