#include <bits/stdc++.h>

using namespace std;

vector<int> getAns(vector<int> arr){
    sort(arr.begin(),arr.end());
    int c=0;
    for(int i=0;i<arr.size();i++ ){
        if(arr[i]==1||arr[i]==0)
        c++;
    }
    
    int count=0;
    int i=c;
   while(i<arr.size()-1&&arr.size()>=2){ //1,2,3,4,5,6
        int j=i+1;
        int s=arr.size();
        while(j<arr.size()){
            if(arr[j]>=2*arr[i])
            {
                arr.erase(arr.begin()+j);
                arr.erase(arr.begin()+i);
                count++;
                
                break;
                
            }
            j++;
            
        }
        if(s>arr.size())
        continue;
        i++;
    }
    i=0;
  while(i<arr.size()-1&&arr.size()>=2){ //1,5
  
        int j=i+1;
        int s=arr.size();
        while(j<arr.size()){
            if(arr[j]>=2*arr[i])
            {
                arr.erase(arr.begin()+j);
                arr.erase(arr.begin()+i);
                count++;
                
                break;
                
            }
            j++;
            
        }
       
        if(s>arr.size())
        continue;
        i++;
    }
    
    
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    int r=arr.size();
    return {count,r};
}

int main()
{
  vector<int> arr={2,4};
 vector<int> v=getAns(arr);
 for(int i:v)
 cout<<i<<" ";

    return 0;
}
