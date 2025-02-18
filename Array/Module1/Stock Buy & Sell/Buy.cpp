#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n = prices.size();
            if (n == 0) return 0;  // Edge case: empty prices array
    
            int min_val = INT_MAX;
            int max_profit = 0;  // Initialize to 0 because no transaction means no profit
    
            for (int i = 0; i < n; i++) {
                min_val = min(min_val, prices[i]);  // Update min price seen so far
                int diff = prices[i] - min_val;     // Calculate profit
                max_profit = max(max_profit, diff); // Update max profit
            }
            return max_profit;
        }
    };
    