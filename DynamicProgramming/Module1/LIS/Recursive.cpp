// Input: nums = [10,9,2,5,3,7,101,18]
// Output: 4
// Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int help(int curr,int prev,vector<int>&nums,int n) {
        
        if(curr==n) {
            return 0;
        }
        
        int len = 0+help( curr+1,prev,nums, n);   // Curr >! Prev
            
            if(prev==-1  || nums[curr]>nums[prev]) {   // Curr > Prev
                len=max(len,1+help(curr+1,curr,nums,n));
            }

        return len;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        
        int curr,prev;
        int n=nums.size();
        
      return help(0,-1,nums,n);
    }
};