#include <bits/stdc++.h>
using namespace  std; 

class Solution {
public:
    
void help(vector<vector<int>>&ans,vector<int>&ds,vector<int>&nums,int freq[]) {
        
        if(ds.size()==nums.size()) {
            ans.push_back(ds);
        }
        
        for(int i=0;i<nums.size();i++) {
            if(!freq[i]) {
                
                ds.push_back(nums[i]);
                freq[i]=1;
                help(ans,ds,nums,freq);
                
                freq[i]=0;
                ds.pop_back();
                
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
        
       int freq[nums.size()];  // Map
        
        for(int i=0;i<n;i++) {
            freq[i]=0;  // All indexes at 0;
        }
        
        help(ans,ds,nums,freq);
        
        return ans;
    }
};

