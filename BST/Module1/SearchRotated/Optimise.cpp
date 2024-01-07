#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int search(vector<int>& nums, int target) {   //  nums = [4,5,6,7,0,1,2], target = 0

        int low = 0,high = nums.size() - 1;

        while(low <= high) {

            int mid = (low + high)/2;
            if(nums[mid] == target)  return mid;
           
            // identify the sorted half right // left
            // left sorted

            if(nums[low] <= nums[mid]) {
                // Is target lies within you ?
                if(nums[low] <= target && target <= nums[mid]) {
                    // remove the right half
                    high = mid - 1;
                }  else  low = mid + 1;     // remove the left half 
            }

            // right sorted
            else if(nums[low] >= nums[mid]) {
                 // Is target lies outside you ?
                if (target >= nums[mid] && nums[high] >=target ) {
                    // remove left half
                    low = mid + 1;
                } else  high = mid - 1;    // remove the right half
            }
        }
         return -1;
    }
};