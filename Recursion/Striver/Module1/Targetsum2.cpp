#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void Solve(int ind,int target,vector<int> &ds,vector<vector<int>> &ans , vector<int> &arr) {
        
        if(target==0) {
            ans.push_back(ds);
            return ;
        }
        
        for(int i=ind;i<arr.size();i++) {
            
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            
            ds.push_back(arr[i]);
            Solve(i+1,target-arr[i],ds,ans,arr);

            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        
        sort(arr.begin(),arr.end());
        
        vector<vector<int>> ans;
        vector<int> ds;
        
        Solve(0,target,ds,ans,arr);
        return ans;
    }
};