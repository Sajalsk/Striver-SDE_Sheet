#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int maxProduct(vector<int>& nums) {

        int curr=1,max1=INT_MIN;
        
        for(int i=0;i<nums.size();i++) {
            curr *=nums[i];
            
            max1=max(curr,max1);
            if(curr==0) curr=1;
        }
        
        curr=1;
        
        for(int i=nums.size()-1;i>=0;i--) {
            curr *=nums[i];
            
            max1=max(curr,max1);
            if(curr==0) curr=1;
        }
         return max1;
    }
};