 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 string str="ram mohan ram shyam";
 string word="ram";
 size_t ind=str.find(word,0);
 if(ind==string::npos)
 cout<<"not found";
 else
 cout<<"found !";
 cout<<endl;
auto ind1=str.find("rupa",0);

cout<<ind1<<endl;


 if(ind1==-1)
 cout<<"not found";
 else
 cout<<"found !";
cout<<endl;
 auto i=str.find(word,0);
 while(i!=string::npos){
cout<<i<<" ";
i=str.find(word,i+1);

 }

 return 0;
 }