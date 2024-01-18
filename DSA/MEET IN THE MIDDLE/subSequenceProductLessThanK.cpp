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
 

#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int numOfSubsets(int arr[], int n, int k) {
        
        // declare four vector for dividing array into  
        // two halves and storing product value of   
        // possible subsets for them 
        vector<int> vect1, vect2, subset1, subset2; 
      
        // ignore element greater than k and divide 
        // array into 2 halves 
        for (int i = 0; i < n; i++) { 
      
            // ignore element if greater than k 
            if (arr[i] > k) 
                continue; 
            if (i <= n / 2) 
                vect1.push_back(arr[i]); 
            else
                vect2.push_back(arr[i]); 
        } 
      
        // generate all subsets for 1st half (vect1) 
        for (int i = 0; i < (1 << vect1.size()); i++) { 
            int value = 1; 
            for (int j = 0; j < vect1.size(); j++) { 
                if (i & (1 << j)) 
                    value *= vect1[j]; 
                if (value > k)
                    break;
            } 
      
            // push only in case subset product is less  
            // than equal to k 
            if (value <= k) 
                subset1.push_back(value); 
        } 
      
        // generate all subsets for 2nd half (vect2) 
        for (int i = 0; i < (1 << vect2.size()); i++) { 
            int value = 1; 
            for (int j = 0; j < vect2.size(); j++) { 
                if (i & (1 << j)) 
                    value *= vect2[j]; 
                if (value > k)
                    break;
            } 
      
            // push only in case subset product is 
            // less than equal to k 
            if (value <= k) 
                subset2.push_back(value); 
        } 
      
        // sort subset2 
        sort(subset2.begin(), subset2.end()); 
      
        int count = 0; 
        for (int i = 0; i < subset1.size(); i++) 
            count += upper_bound(subset2.begin(), subset2.end(),  
                             (k / subset1[i])) - subset2.begin(); 
      
        // for null subset decrement the value of count 
        count--; 
      
        // return count 
        return count; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>K;

        Solution ob;
        cout << ob.numOfSubsets(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends