#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int help(int curr,int prev,vector<int>&nums) {  // nums = [10,9,2,5,3,7,101,18]
        
        if(curr==nums.size()) return 0;
    
        int len = 0+help(curr+1,prev,nums);                        // Curr >! Prev
            
          if(prev==-1 || nums[curr]>nums[prev]) {                   // Curr > Prev
                len=max(len,1+help(curr+1,curr,nums));
            }

        return len;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        
      return help(0,-1,nums);
    }
};