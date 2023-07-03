#include<iostream>
using namespace std;
class CountOb
{
 static int count;
 public:
 CountOb()
 {
     count++;
 }
 static int get_count()
 {
     return count;
 }
};
int CountOb::count=0;

int main()
{
    CountOb a1,a2,a3;
    int m=CountOb::get_count();
    cout<<m;
    return 0;
}
