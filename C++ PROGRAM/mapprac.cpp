#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> st;

    //using loop we can enter the map element
    for(int i=0;i<5;i++){
        cout<<"Enter "<<i<<" th name:";
        string str;
        cin>>str;
        st[i]=str;
    
    }

    //accessing the map value with the help of loop
    for(int i=0;i<5;i++){
        cout<<st[i]<<endl;
    }
 cout<<"Accessing Elements using iterator"<<endl;
    for(auto x:st.end()){
        cout<<x;
    }
    return 0;
}