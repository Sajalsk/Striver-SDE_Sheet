#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        
        for (int i=n-2;i>=0;i--) {
           if(nums[i+1]>nums[i]) {            // next to it         5 3 4 1 2 6 4 (6>2) 
              for (int j=n-1;j>i;j--) {                            // from back
                if(nums[j]>nums[i]) {
                    swap(nums[i],nums[j]);
                    sort(nums.begin()+i+1,nums.end());
                    return;
                }
             }
            } 
        }
        
         sort(nums.begin(),nums.end());        // 3 2 1 => 1 2 3
    }
};