#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    cout<<"Enter name of 5 people:";
    string str[5];
    for(int i=0;i<5;i++)
    cin>>str[i];
    string uniqSen;
    for(int i=0;i<5;i++){
    int found=uniqSen.find(str[i]);
    if(found==string::npos){
        uniqSen=uniqSen+str[i]+" ";
    }

    
}
cout<<endl<<uniqSen;
    return 0;

}