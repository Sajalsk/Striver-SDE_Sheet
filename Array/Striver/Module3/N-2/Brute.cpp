#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int majorityElement(vector<int>& nums) {
        
        int n=nums.size(),count=1;
         
        for (int i=0;i<n;i++) {
            count=1;
            for (int j=i+1;j<n;j++) {
                if(nums[i]==nums[j])   count++;
            }
            
            if(count>n/2) return nums[i];
        }
         return -1;
    }
};