 #include<bits/stdc++.h>
 using namespace std;

 void printMax(int arr[],int k,int n){
    queue<int> window;
    for(int i=0;i<k;i++)
    window.push(arr[i]);
   int max=*max_element(window.begin(),window.end());
   cout<<max<<" ";
   while(i<n){
      window.push(arr[i]);
      if(max==window.front()){
        window.pop();
        max=*max_element(window.begin(),window.end());
      }
      else
      {
        window.pop();
        if(window.back()>max)
        max=arr[i];
      }
      cout<<max<<" ";
   }

   }

 
 int main(){
    int n=11;
 int arr[n]={4,1,3,5,1,2,3,2,1,1,5};
 int k=3;
 printMax(arr,k,n);

 return 0;
 }