// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxProduct(vector<int> &nums) {

            int curr = INT_MIN, max1 = INT_MIN;
            for (int i = 0; i < nums.size(); i++) {
                curr = 1;
                for (int j = i; j < nums.size(); j++) {
                    curr *= nums[j];
                    max1 = max(max1, curr);
                }
            }

            return max1;
        }
};