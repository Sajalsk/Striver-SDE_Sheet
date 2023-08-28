#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max1=INT_MIN;
       for(int i=1;i<prices.size();i++) {
           
          int min1=min(min1,prices[i]);  // keeping track of minimum in the array.
          int diff=prices[i]-min1;
           
           max1=max(max1,diff);
       }
        return max1;
    }
};