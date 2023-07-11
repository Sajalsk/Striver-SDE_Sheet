#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0;
        int max1=nums[0];
        
        for (int i=0;i<nums.size();i++) {
            
            sum=sum+nums[i];
            max1=max(max1,sum);
            
            if(sum<0) {
               
                sum=0;
            }
        }
        
       
        
        return max1;
    }
};