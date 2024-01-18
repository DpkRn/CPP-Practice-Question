 /*
 Question: 
 Given an array arr[] of N elements. Find the number of non-empty subsets whose product of elements is less than or equal to a given integer K.
Example 1:

Input:
N = 4
arr[] = {2, 4, 5, 3}
K = 12
Output:
8
Explanation:
All possible subsets whose 
products are less than 12 are:
(2), (4), (5), (3), (2, 4), (2, 5), (2, 3), (4, 3)

Expected Time Complexity: O(N*2^N/2)
Expected Auxiliary Space: O(N)


Constraints:
1 ≤ N ≤ 30
1 ≤ arr[i] ≤ 10
1 ≤ K ≤ 106
 
 */

/*
Approach:
dp will take N*productOfAllNos
so we will apply bitmask to find the subsets
but that will take N*2^N complexity so we have to optimise 
we can devide in two part of array and we can find for each array subset whose product is less than K
that will take N*2^N/2 and will store in two another container 
so that we can find the another remaining subsets by multiplying 
the elements in both container
for that we can sort one of the container so that we can get direct index by using upper_bound method
that will take logn
so total time complextiy will be
N/2*2^N/2*logN

*/
 
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 
 return 0;
 }