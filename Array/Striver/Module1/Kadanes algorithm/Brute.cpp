#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum=0;
        int n = nums.size();
        int ans = INT_MIN;
        
        for(int i = 0; i<n;i++)  {
              curSum = 0;
            for(int j = i;j<n;j++)  {
                curSum += nums[j];
                ans = max(ans, curSum);   
            }
        }     
        return ans;
    }
};

