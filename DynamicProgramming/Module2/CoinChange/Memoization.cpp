#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int help(vector<int>& coins, int amount, int n,vector<vector<int>>&dp) {

        // if amount is 0, then we need to take 0 coins to fulfill the amount
        if(amount == 0) return 0;

		// if no coins present, then we need to take infinite coins to fulfill the amount
        if(n == 0) return INT_MAX-1;

		// if the present coin is smaller than the amount, we can either take it or decide not to take it
        if(coins[n-1] <= amount) {
            return dp[n][amount] = min(1 + help(coins, amount-coins[n-1], n,dp), help(coins, amount, n-1,dp));
        }

		// else if the coin is larger than the amount, we can't take it
        else {
            return dp[n][amount] = 0+help(coins, amount, n-1,dp);
        }
    }

    // unbounded knapsack
    int coinChange(vector<int>& coins, int amount) {

        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));

        int res = help(coins,amount,n,dp)

        if(res==INT_MAX-1)?-1:res;

    }
};