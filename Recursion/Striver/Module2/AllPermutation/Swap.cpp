#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
 void Solve(vector<vector<int>>&res,vector<int>&nums,int ind) {
        
     if(ind==nums.size()) {
         res.push_back(nums);
         return;
     }
     
     for(int i=ind;i<nums.size();i++) {     // index

         swap(nums[i],nums[ind]);
         Solve(res,nums,ind+1);
         swap(nums[i],nums[ind]);          // backtracking
      } 
    }

    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>res;
        
        Solve(res,nums,0);
        return res;
    }
};