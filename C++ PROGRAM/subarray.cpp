 #include<bits/stdc++.h>
 using namespace std;
 int main(){
//     vector<vector<int>> v;
//  int arr[5]={10,20,30,40,50};
//  for(int i=1;i<=5;i++){
//     for(int j=0;j<5-(i-1);j++){
//         vector<int> temp={};
//         for(int k=j;k<j+i;k++){
//             temp.push_back(arr[k]);
//         }
//         v.push_back(temp);
//     }

//  }

//  for(vector<int> row:v){
//     for(int i=0;i<row.size();i++){
//         cout<<row[i]<<" ";
//     }
//     cout<<endl;
//  }
//  return 0;

  vector<vector<int>> v;
  int n=5;
 int arr[5]={10,20,30,40,50};
 for(int sp=0;sp<n;sp++){                                
    for(int ep=sp;ep<n;ep++){                            //0,0 0,1  0,2 0,3
        vector<int> temp={};
     for(int i=sp;i<ep;i++){                              //0->0  0->1  0->2 ...
        temp.push_back(arr[i]);
     }
     v.push_back(temp);
    }
 }
 
 
for(vector<int> row:v){
    for(int i=0;i<row.size();i++){
        cout<<row[i]<<" ";
    }
    cout<<endl;
 }
return 0;
 }