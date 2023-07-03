#include<iostream>
using namespace std;



    float velocity(int D,int T)
    { float V;


        if(T==0)
            throw T;
            V=D/T;
            return V;

    }

    int main()
{
  cout<<"Distance automatically taken in km and time in hour"<<endl;
    cout<<"Enter Distance:";
    int D;
    cin>>D;
    cout<<"Enter Time:";
    int T;
    cin>>T;
    int V;
    try{
    V=velocity(D,T);
            cout<<"Velocity="<<V<<" km/h";

    }catch(int x)
    {
        cout<<"Time cant be zero";
    }
    return 0;
}
