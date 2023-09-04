 /* memonization
 #include<bits/stdc++.h>
 using namespace std;
 //check on code studio
int getNextEnergy(vector<int> &heights,int n){
    if(n==0)
    return 0;
   int l=abs(heights[n]-heights[n-1])+getNextEnergy(heights,n-1);
   if(n<2)
   return l;
   int r=abs(heights[n]-heights[n-2])+getNextEnergy(heights,n-2);
   return min(l,r);
}
 int frogJumps(vector<int> &heights,int n){
 return getNextEnergy(heights,n-1);

 }
 int main(){
 vector<int> heights={10,20,30,10};
 int minLostEnergy=frogJumps(heights,4);
 cout<<minLostEnergy;
 return 0;
 }*/

/*tabulization form


#include<bits/stdc++.h>
 using namespace std;
 int main(){
 vector<int> heights={10,20,30,10};
 int n=heights.size();
 vector<int> dp(n,0);

 dp[0]=0;
 int ind;
 for( ind=1;ind<n;ind++){
    int fs=dp[ind-1]+abs(heights[ind]-heights[ind-1]);
    int ss=INT_MAX;
    if(ss>1)
    ss=dp[ind-2]+abs(heights[ind]-heights[ind-2]);
   dp[ind]=min(fs,ss);
 }
 
 cout<< "minimum energy:"<<dp[ind-1];
 return 0;
 }
time complexity O(N)
space complexity((N)

 */


//tabulization with minimum space complexity
//time complexity O(N)
//space complexityO(1)
#include<bits/stdc++.h>
 using namespace std;
 int main(){
 vector<int> heights={10,20,30,10};
 int n=heights.size();
 int firstPrev=0;
 int secondPrev=0;
 int curr;
 int ind;
 for( ind=1;ind<n;ind++){
    int fs=firstPrev+abs(heights[ind]-heights[ind-1]);
    int ss=INT_MAX;
    if(ss>1)
    ss=secondPrev+abs(heights[ind]-heights[ind-2]);
   curr=min(fs,ss);
   firstPrev=secondPrev;
 secondPrev=curr;

 }
 
 
 cout<< "minimum energy:"<<curr;
 return 0;
 }