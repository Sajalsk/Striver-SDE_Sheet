#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        
        int n=nums.size(),count=0;
        
        for(int i=0;i<n;i++) {
            for (int j=i+1;j<n;j++) {
                if(nums[i]>2*nums[j])  count++;  
            }
        }
        
        return count;
    }
};