#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int findDuplicate(vector<int>& nums) {    // given size of nums is n+1;
        
        vector<int>freq(nums.size(),0);
        
        for(int i=0;i<nums.size();i++) {
            freq[nums[i]]++;
        }
      
        for( int i=0;i<nums.size();i++) {
            if(freq[i]>1) return i;
        }
        
        return -1;
    }
};