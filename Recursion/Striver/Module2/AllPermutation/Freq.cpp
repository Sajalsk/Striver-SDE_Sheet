#include <bits/stdc++.h>
using namespace  std; 

class Solution {
public:
    
void help(vector<vector<int>>&ans,vector<int>&ds,vector<int>&nums,vector<int>&freq) {
        
        if(ds.size()==nums.size()) {
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<nums.size();i++) {
            if(freq[i]==0) {
                
                ds.push_back(nums[i]);
                freq[i]=1;
                help(ans,ds,nums,freq);
                
                freq[i]=0;
                ds.pop_back();                 // backtracking
                
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
     
        vector<int>freq(n,0);
        
        help(ans,ds,nums,freq);
        
        return ans;
    }
};
