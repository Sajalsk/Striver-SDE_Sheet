#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {  // Input : [-1,0,1,2,-1,-4]  Output: [[-1,-1,2],[-1,0,1]]
        
        sort(nums.begin(), nums.end());                // [-4,-1,-1,0,1,2] 
        
        vector<vector<int>> res;
        set<vector<int>> s;

        for (int i=0 ; i<nums.size();i++) {
            
            int j = i + 1;
            int k = nums.size() - 1;
            
            while (j < k) {   
                
                int sum = nums[i] + nums[j] + nums[k];
                
                if (sum == 0) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } 
                else if (sum < 0)   j++;
                else if(sum>0) k--;    
            }
        }
        
        for(auto it : s)   res.push_back(it);
             
        return res;
    }
};