 #include<bits/stdc++.h>
 using namespace std;
 class Stack{ 
    public:  
    int size;
    int t;
    int *arr;
    Stack(int size){
        this->size=size;
        t=-1;
        arr=new int(size);
    }

    void push(int n){
        if(t>=size-1)
        return ;
        arr[++t]=n;
        
    }

    void pop(){
        if(t==-1) return;
        --t;
    }
    int top(){
        return arr[t];
    }
    bool empty(){
        if(t==-1) return true;
        return false;
    }
    void print(){
        for(int i=0;i<=t;i++){
            cout<<arr[i]<<" ";
        }
    }
 };
 
 
 
 int main(){
    Stack s(5);
   // cout<<s.empty();
    s.push(5);
    s.push(7);
    s.push(8);
    s.push(7);
    s.push(8);
    s.push(8);
    s.pop();
    
    s.print();
   // cout<<s.top();
    return 0;
 }