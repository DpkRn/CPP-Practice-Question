 #include<bits/stdc++.h>
 using namespace std;
int maxSum(int arr[],int n,int k){
    int max_sum=0;
    for(int i=0;i<k;i++){
        max_sum+=arr[i];
    }
    int win_sum=max_sum;
    int i=k;
while(i<n){
win_sum=win_sum+arr[i]-arr[i-k];
max_sum=max(max_sum,win_sum);
i++;
}
return max_sum;
}
 int main()
{
    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSum(arr, n, k);
    return 0;
}
 