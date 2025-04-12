#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int maxProfit(vector<int>& prices) {

            int n = prices.size();
            if (n == 0) return 0; 
    
            int min_val = INT_MAX;
            int max_profit = 0;  
    
            for (int i = 0; i < n; i++) {
                min_val = min(min_val, prices[i]);  
                int diff = prices[i] - min_val;
                max_profit = max(max_profit, diff);
            }
            return max_profit;
        }
    };
    