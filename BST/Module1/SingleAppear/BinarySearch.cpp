#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();
        int lo = 0, hi = n - 1;

        while(lo<= hi) {

            int mid = (hi + lo) >> 1;
            if(mid + 1 < n && nums[mid] == nums[mid + 1]) {
                if(mid % 2) hi = mid - 1;
                else    lo = mid + 1;
            }
            else if(mid - 1 >= 0 && nums[mid - 1] == nums[mid]) {
                if((mid - 1) % 2)   hi = mid - 1;
                else    lo = mid + 1;
            }
            else    return nums[mid];
        }
        return -1;
    }
};