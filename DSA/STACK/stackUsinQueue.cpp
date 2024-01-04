 #include<bits/stdc++.h>
 using namespace std;
 class Stack{
     queue<int> result;
     public:
     void push(int n){
      result.push(n);
      int size=result.size();
      for(int i=0;i<size-1;i++){
        result.push(result.front());
        result.pop();
      }   
     }

     void pop(){
        if(!result.empty()) result.pop();
     }

     int top(){
        if(!result.empty()) return result.front();
     }

     int size(){
        return result.size();
     }
     void print(){
        while(!result.empty()){
            cout<<result.front()<<" ";
            result.pop();
        }
     }
 };
 int main(){
    Stack s;
    s.push(6);
    s.push(8);
    s.push(9);
    cout<<s.top();
    s.pop();
    cout<<s.top();
    s.print();
    return 0;
 }


/*using double queue easy method

 class Stack{
     queue<int> result;
     public:
     void push(int n){
        queue<int> temp;
        temp.push(n);
        while(!result.empty()){
            int x=result.front();
            result.pop();
            temp.push(x);
        }
        result=temp;
     }

     void pop(){
        if(!result.empty()) result.pop();
     }

     int top(){
        if(!result.empty()) return result.front();
     }

     int size(){
        return result.size();
     }
     void print(){
        while(!result.empty()){
            cout<<result.front()<<" ";
            result.pop();
        }
     }
 };
 int main(){
    Stack s;
    s.push(6);
    s.push(8);
    s.push(9);
    cout<<s.top();
    s.pop();
    cout<<s.top();
    s.print();
    return 0;
 }

*/
