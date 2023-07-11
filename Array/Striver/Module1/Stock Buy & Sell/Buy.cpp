#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max1=0,min1=prices[0],diff=0;
       for(int i=1;i<prices.size();i++) {
           
           min1=min(min1,prices[i]);  // keeping track of minimum in the array.
           diff=prices[i]-min1;
           
           max1=max(max1,diff);
       }
        return max1;
    }
};