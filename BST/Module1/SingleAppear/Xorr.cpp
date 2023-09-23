#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int singleNonDuplicate(vector<int>& nums) {
        
        // because when you xor a number with itself it results in 0
        // so when u xor all the numbers all the pairs will cancel out
        // each other and u will be left with only the element which is single.
        
        int xorr=0;
        
        for(int i=0;i<nums.size();i++) {
            xorr=xorr^nums[i];
            
        }
         return xorr;
    }
};