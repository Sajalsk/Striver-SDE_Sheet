#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
 void Solve(vector<vector<int>>&ans,vector<int>&nums,int ind) {
        
     if(ind==nums.size()) {
         ans.push_back(nums);
         return;
     }
     
     for(int i=ind;i<nums.size();i++) {
         swap(nums[i],nums[ind]);
         Solve(ans,nums,ind+1);
         
         swap(nums[i],nums[ind]);          // backtracking
      } 
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        
        Solve(ans,nums,0);
        return ans;
    }
};