// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    int Product(vector<int>&nums) {
          int prod=1,max1=nums[0];   // -3 4 6 -7
        for(int i=0;i<nums.size();i++) { 
            prod=1;         
            for (int j=i;j<nums.size();j++) {
                prod*=nums[j];
                max1=max(max1,prod);
            }
        }

        return max1;
    }
 
};