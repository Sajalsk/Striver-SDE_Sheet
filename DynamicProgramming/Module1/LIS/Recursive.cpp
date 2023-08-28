#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int help(int curr,int prev,vector<int>&nums,int n) {  // nums = [10,9,2,5,3,7,101,18]
        
        if(curr==n) return 0;
    
        int len = 0+help(curr+1,prev,nums,n);                        // Curr >! Prev
            
          if(prev==-1 || nums[curr]>nums[prev]) {                   // Curr > Prev
                len=max(len,1+help(curr+1,curr,nums,n));
            }

        return len;
    }
    
    int lengthOfLIS(vector<int>& nums) {

        int n=nums.size();
        
      return help(0,-1,nums,n);
    }
};