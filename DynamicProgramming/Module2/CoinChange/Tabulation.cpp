#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   
    int coinChange(vector<int>& coins, int amount) {

        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1));

        for(int i=0; i<n+1; i++){
            for(int j=0; j<amount+1; j++) {
                // if no coins present, then we need to take infinite coins to fulfill the amount
                // if amount is 0, then we need to take 0 coins to fulfill the amount
                // Base Case
                if(i==0) dp[i][j] = INT_MAX-1;
                if(j==0) dp[i][j] = 0;
            }
        }
        
        for(int i=1; i<n+1; i++){
            for(int j=1; j<amount+1; j++) {
        // if the present coin is smaller than the amount, we can either take it or decide not to take it
        // else if the coin is larger than the amount, we can't take it
                if(coins[i-1] <= j) {
                    // choose minimum number of coins required
                    dp[i][j] = min(dp[i-1][j], 1 + dp[i][j-coins[i-1]]);
                }
                else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }

// if the answer is infinte only, that means, we could not find a way to take coins to fulfill the amount
        return dp[n][amount] == (INT_MAX-1)? -1 : dp[n][amount];
    }
};