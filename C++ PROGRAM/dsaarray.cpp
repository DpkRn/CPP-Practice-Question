#include<iostream>
using namespace std;
int main()
{

    cout<<"Enter size of Array:";
    int n;
    cin>>n;
    int arr[n];

    for(int i=n-1;i>=0;i--){
        cout<<"Enter "<<i+1<<"th element:";
        cin>>arr[i];
    }

    cout<<endl<<"Your Entered Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }

    cout<<"Largest Element is:"<<max;
    int flag=0,c=0,d=0;;
    int dup[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
            {


                flag=1;}
        }
        if(flag==0)
            dup[c++]=arr[i];
    }

    cout<<endl<<"After Removing Duplicate element:"<<endl;
    for(int i=0;i<n;i++){

        cout<<dup[i]<<endl;
    }
    return 0;
}
