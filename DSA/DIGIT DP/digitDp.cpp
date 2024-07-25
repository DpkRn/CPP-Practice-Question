#include <bits/stdc++.h>
#define int long long int
using namespace std;

const int mod = (int)(1e9 + 7);
const int INF = 9e15;

int k = 9; // Target digit sum
int n = 4; // Number of digits
vector<int> path;

// Recursive function to find numbers with digit sum equal to k
int solve(vector<int>& arr, int i, int sum, int tight,int n) {
    if (i == n) {
        if (sum == k) {
            for (auto it : path) cout << it;
            cout << endl;
            return 1;
        } else {
            return 0;
        }
    }

    int ans = 0;
    int ub = tight == 1 ? 9 : arr[i];
    for (int j = 0; j <= ub; j++) {
        path.push_back(j);
        ans += solve(arr, i + 1, sum + j, tight | (j < arr[i]),n);
        path.pop_back();
    }
    return ans;
}

// Function to initialize and start the recursive solving process
int getSum(vector<int>& arr) {
    int n=arr.size();
    
    return solve(arr, 0, 0, 0,n);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Example input number as a vector
    vector<int> arr = {5, 2, 2, 1};
   

    int ans = getSum(arr);
    

    return ans;
}
