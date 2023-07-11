#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
  void help(int i,vector<int>& nums,vector<int>ds,vector<vector<int>>& ans,int n) {
    
    if(i==n) {
        ans.push_back(ds);
        return;
    }
    
    ds.push_back(nums[i]);
    help(i+1,nums,ds,ans,n);
    
    ds.pop_back();
    help(i+1,nums,ds,ans,n);
          
      }
        
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>ds;
        vector<vector<int>>ans;
        
        sort(nums.begin(),nums.end());
        
        help(0,nums,ds,ans,n);
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};