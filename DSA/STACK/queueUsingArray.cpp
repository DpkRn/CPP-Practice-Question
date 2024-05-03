 #include<bits/stdc++.h>
 using namespace std;
 class Queue{
    int front;
    int rare;
    int size;
    int *arr;
    int cnt;
    public:
    Queue(int size){
        this->size=size;
        arr=new int(size);
        cnt=0;
        front=0;
        rare=0;
    }
    void push(int n){
       if(cnt==size) return;
       arr[rare%size]=n;
       rare++;
       cnt++;
        
    }

    void pop(){
        if(cnt==0) return;
        arr[front%size]=-1;
        front++;
        cnt--;
    }
    void print(){
        for(int i=front;i<rare;i++){
            cout<<arr[i%size]<<" ";
        }
    }
    bool empty(){
        return cnt;
    }

    int size(){
        return cnt;
    }
 };
 int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    //q.pop();
    
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(9);
    q.pop();
    
    q.print();
    return 0;
 }