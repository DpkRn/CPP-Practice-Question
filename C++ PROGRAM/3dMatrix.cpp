#include <iostream>
#include<vector>
using namespace std;
int main() {
   vector<vector<vector<int>>> r;
   vector<vector<int>> temp;
   
   for(int i=0;i<2;i++){
       for(int j=0;j=2;j++){
           for(int k=0;k<2;k++){
            cout<<"enter no:";
               cin>>temp[j][k];
           }
       }
       r.push_back(temp);
   }


 for(int i=0;i<2;i++){
       for(int j=0;j=2;j++){
           for(int k=0;k<2;k++){
               cout<<temp[j][k]<<" ";
           }
           cout<<endl;
       }
      cout<<endl<<endl;
   }
    return 0;
}