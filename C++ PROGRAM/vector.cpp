#include <bits/stdc++.h>

using namespace std;
void print(vector<int> v){
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
   vector<int> v={0,1,2,3,4};
   
  
  // v.insert(v.begin(),8);
   
   v.insert(v.end(),9);
   v.erase(v.begin(),v.begin()+3);
   v.reverse();
   
   v.push_back(20);

    print(v);

  

    return 0;
}