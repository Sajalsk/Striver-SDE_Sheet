#include <bits/stdc++.h>
using namespace std;

// Not working
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size(),prev;
        int maxcount=INT_MIN,count=1;
        
        for(int i=0;i<n;i++) {
            count=1;
            prev=nums[i];
            for(int j=i+1;j<n;j++) {
                if(nums[j]>prev) {
                    prev=nums[j];
                    count++;
                } 
            }
             maxcount=max(maxcount,count);
        }
         return maxcount;
    }
};