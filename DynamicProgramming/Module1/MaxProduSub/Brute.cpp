#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

        int maxProduct(vector<int> &nums) {

            int curr = INT_MIN, max_prod = INT_MIN;      // Input: nums = [2,3,-2,4]

            for (int i = 0; i < nums.size(); i++) {
                curr = 1;
                for (int j = i; j < nums.size(); j++) {
                    curr *= nums[j];
                    max_prod = max(max_prod, curr);
                }
            }
             return max_prod;
        }
};

/*   Not working   [-2]

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int prod=1,maxprod=INT_MIN;
        
      for(int i=0;i<nums.size();i++) {
          prod=nums[i];
          for(int j=i+1;j<nums.size();j++) {
              prod*=nums[j];
              maxprod  = max(prod,maxprod);
          }
      }
        return maxprod;
    }
};
*/