#include <bits/stdc++.h>
using namespace std;

class Solution {  
public:

    int majorityElement(vector<int>& nums) {
        
       int count=1;
       int elem=nums[0];
        
        for(int i=1;i<nums.size();i++) {
            
            if(nums[i]==elem)  count++;
            
            else if(count==0) {
                elem=nums[i];
                count++;
            }
            
            else count--;  
        }
         return elem;
    }
};