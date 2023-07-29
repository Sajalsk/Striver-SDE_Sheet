#include <bits/stdc++.h>
using namespace  std;

int knapsackUtil(vector<int>& wt, vector<int>& val, int i, int j, vector<vector<int>>& dp){

    if(i == 0) {
        if(wt[0] <=j) return val[0];
        else return 0;
    }
    
    if(dp[i][j]!=-1) return dp[i][j];
      
    int notTaken = 0 + knapsackUtil(wt,val,i-1,j,dp);
    
    int taken = INT_MIN;
    if(wt[i] <= j)
        taken = val[i] + knapsackUtil(wt,val,i-1,j-wt[i],dp);
        
    return dp[i][j] = max(notTaken,taken);
}

int knapsack(vector<int>& wt, vector<int>& val, int n, int W) {
    
    vector<vector<int>> dp(n,vector<int>(W+1,-1));
    return knapsackUtil(wt, val, n-1, W, dp);
}

