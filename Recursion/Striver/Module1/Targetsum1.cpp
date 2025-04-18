#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void solve(int ind,vector<int>&candidates,vector<vector<int>>&ans,vector<int>ds,int target) {
        
        if(ind==candidates.size()) {
            
            if(target==0) 
            ans.push_back(ds);
            return;
        }
        
        if(candidates[ind]<=target) {                             // taken

           ds.push_back(candidates[ind]);
           solve(ind,candidates,ans,ds,target-candidates[ind]);   //ind since taking is allowed multiple time
            
           ds.pop_back();                                          // backtracking
        } 
    
         solve(ind+1,candidates,ans,ds,target);                    // Not- taken
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        
        solve(0,candidates,ans,ds,target);
        return ans;
    }
};