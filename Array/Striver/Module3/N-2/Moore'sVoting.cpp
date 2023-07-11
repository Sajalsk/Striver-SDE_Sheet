#include <bits/stdc++.h>
using namespace std;
class Solution {
    
public:
    int majorityElement(vector<int>& nums) {
        
       int n=nums.size();
       int count=1;
       int elem=nums[0];
        
        for(int i=1;i<n;i++) {
            
            if(count==0) {
                elem=nums[i];
                count++;
            }
            
            else if(nums[i]==elem) {
                count++;
            }
            
            else {
                count--;
            }
        }
        
        return elem;
    }
};