#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void solve(vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans, int index) {
        
        ans.push_back(ds);
        
        for(int i=index;i<nums.size();i++) {

            if(i>index && nums[i] == nums[i-1])  continue;
        
            ds.push_back(nums[i]);     
            solve(nums,ds,ans,i+1);
            
            ds.pop_back();             // Backtracking happens at the same time.
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> ds;

        sort(nums.begin(),nums.end());
        
        solve(nums,ds,ans,0);
        
        return ans;
    }
};