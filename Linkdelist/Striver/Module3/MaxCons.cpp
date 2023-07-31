#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count=0,max1=0;
        for(int i=0;i<=nums.size();i++) {
            
            if(nums[i]==1) count++;
            
            else {
              max1 = max(max1,count);
              count=0;
            }
        }
        
       return max1; 
    }
};