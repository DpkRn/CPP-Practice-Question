/*
A thief robbing a store can carry a maximal weight of W into his knapsack. There are N items, and i-th item weigh 'Wi' and the value being 'Vi.' What would be the maximum value V, that the thief can steal?
Input Format :
The first line of the input contains an integer value N, which denotes the total number of items.

The second line of input contains the N number of weights separated by a single space.

The third line of input contains the N number of values separated by a single space.

The fourth line of the input contains an integer value W, which denotes the maximum weight the thief can steal.
Output Format :
Print the maximum value of V that the thief can steal.
Constraints :
1 <= N <= 20
1<= Wi <= 100
1 <= Vi <= 100

Time Limit: 1 sec
Sample Input 1 :
4
1 2 4 5
5 4 8 6
5
Sample Output 1 :
13

*/

#include<bits/stdc++.h>
int solve(int *weights, int *values, int n, int maxWeight){
  if (n < 0) {
    return 0;
  }     
  int pick=INT_MIN;
  if(maxWeight-weights[n]>=0)
        pick=values[n]+solve(weights,values,n-1,maxWeight-weights[n]);
        int notpick=0+solve(weights,values,n-1,maxWeight);

		return max(pick,notpick);
}
int knapsack(int *weights, int *values, int n, int maxWeight)
{
 
	return solve(weights,values,n-1,maxWeight);
}