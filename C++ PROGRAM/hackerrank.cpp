
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int T;
cin>>T;
double line[T][3]={100.345, 2006.008, 2331.41592653498};
/*for(int i=0;i<T;i++){
    for(int j=0;j<3;j++){
 cin>>line[i][j];
    }
}*/
 for(int i=0;i<T;i++){
    for(int j=0;j<3;j++){
        if(j==0){
            cout<<"0x"<<hex<<int(line[i][j])<<endl;
        }else if(j==1){

          cout<<setfill('_')<<setw(15)<<showpos<<line[i][j]<<endl;
          
            }else if(j==2){
                
                cout<<scientific<<setprecision(9)<<noshowpos<<line[i][j]<<endl;
            }
    }
 }
 return 0;
}    