#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
   int Solve(vector<int>& arr, int i, int j, vector<vector<int>>& dp){
    
    if(i == j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
        
    int min1 = INT_MAX;
    
    for(int k = i; k<= j-1; k++){
        
        int ans = Solve(arr,i,k,dp) + Solve(arr, k+1,j,dp) + arr[i-1]*arr[k]*arr[j];
        min1 = min(min1,ans);   
    }
     return min1;
}

int matrixMultiplication(vector<int>& arr, int N){
    
    int i =1;
    int j = N-1;
    vector<vector<int>> dp(N,vector<int>(N,-1));
    return Solve(arr,i,j,dp); 
}
};