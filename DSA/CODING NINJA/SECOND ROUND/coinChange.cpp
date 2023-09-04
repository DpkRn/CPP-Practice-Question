/*You are given an infinite supply supply of coins of each of denominations D = {D0, D1, D2, D3, ...... Dn-1}. You need to figure out the total number of ways W, in which you can make change for Value V using coins of denominations D.
Note :
Return 0, if change isn't possible.
Input Format :
Line 1 : Integer n i.e. total number of denominations
Line 2 : n integers i.e. n denomination values
Line 3 : Value V
Output Format :
Line 1 :  Number of ways i.e. W
Constraints :
1<=n<=10
1<=V<=500
Sample Input 1 :
3
1 2 3
4
Sample Output : 4
*/


int solve(int arr[],int n,int value,int ind){
   if(value==0) return 1;
   int totalWays=0;
   for(int i=ind;i<n&&arr[i]<=value;i++){
    int ways= solve(arr,n,value-arr[i],i);
    totalWays+=ways;
   }
   return totalWays;
}

int countWaysToMakeChange(int denominations[], int numDenominations, int value){

 return solve(denominations,numDenominations,value,0);
  

}
