  #include<bits/stdc++.h>
  using namespace std;
  void print(int arr[]){
 for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
  }
  void change(int *arr){
    print(arr);
    arr[3]=100;
    *(arr+4)=101;
  }

  void change1(int arr[]){
      arr[1]=99;
    *(arr+2)=98;
  }

  void change2(int &arr){
    arr=9;
  }
  int main(){
  int arr[]={1,2,3,4,5};
   cout<<arr<<endl;
   cout<<*arr<<endl;
   change(arr);
   cout<<endl;
   cout<<"after changing: ";
   print(arr); 
   change1(arr);
   cout<<endl;
   cout<<"after changing: ";
   print(arr);
   change2(*arr);
   cout<<endl;
   cout<<"after changing: ";
   print(arr);

  }