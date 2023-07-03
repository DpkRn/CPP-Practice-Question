#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int r,c;
    cin>>r>>c;

cout<<"\t\t\t";
    for(int i=0;i<(r*2+1);i++){
        for(int j=0;j<(2*c+1);j++){
            if(i%2==0){
                if(j%2==0){
                   if((j==0||j==1)&&(i==0||i==1))
                    cout<<".";
                   else
                    cout<<"+";

                }
                else
                if((j==0||j==1)&&(i==0||i==1))
                    cout<<".";
                    else
                cout<<"-";
            }
            else
            {
                if(j%2==0){
                    if((j==0||j==1)&&(i==0||i==1))
                    cout<<".";
                    else
                    cout<<"|";
                }
                else
                cout<<".";
            }

        }
       cout<<endl<<"\t\t\t";
    }
}
}
