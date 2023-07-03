// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int row,col;
    cout<<"Enter row and column:";
    cin>>row>>col;
    vector<vector<int>> v;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int n;
            cout<<"in loop";
            cin>>n;
            v[i].push_back(n);
        }
    }
    
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cout<<v[i][j];
        }
        cout<<endl;
    }
    

    return 0;
}