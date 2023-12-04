#include<stack>
#include<iostream>
using namespace std;
int main(){
    stack<int> st;
    st.push(3);
    st.push(4);

    int x=st.pop();
    cout<<x;
}