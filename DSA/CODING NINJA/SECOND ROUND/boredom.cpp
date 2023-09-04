/*Gary is bored and wants to play an interesting but tough game . So he figured out a new board game called "destroy the neighbours" . In this game there are N integers on a board. In one move, he can pick any integer x from the board and then all the integers with value x+1 or x-1 gets destroyed .This move will give him x points.
He plays the game until the board becomes empty . But as he want show this game to his friend Steven, he wants to learn techniques to maximise the points to show off . Can you help Gary in finding out the maximum points he receive grab from the game ?
Input Format :
First line will contain T (number of test case), each test case is consists of two line.
Line 1: Integer N 
Line 2: A list of N integers
Output Format :
For each test case print maximum points, Gary can receive from the Game setup in a newline.
Constraints :
 1 <= T <= 50
 1 <= N <= 10^5
 1 <= A[i] <= 1000
Sample Input :
1
2
1 2
Sample Output :
2
Explanation:
Gary can receive a maximum of 2 points, by picking the integer 2. */

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi=-1;
     vector<long long> count(100005,0);
        for(int i=0;i<n;i++ ){
            int ele;
            cin>>ele;
            maxi=max(maxi,ele);
            count[ele]++;
        }

        long long dp[maxi+1];
        dp[0]=0;
        dp[1]=count[1];
        for(int i=2;i<=maxi;i++){
            dp[i]=max(dp[i-1],count[i]*i+dp[i-2]);
        }
        cout<<dp[maxi]<<endl;
    }
    return 0;
}