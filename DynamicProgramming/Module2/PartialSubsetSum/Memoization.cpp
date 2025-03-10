#include <bits/stdc++.h>
using namespace std;
class Solution{
     public:
    
    bool solve(int index,int target, vector<int>&nums, int N, int sum,vector<vector<int>>&dp) {
        
        if(index>=N) return false ;
        if(sum>target) return false;
        if(sum==target) return true;
        
        if(dp[index][sum]!=-1) return dp[index][sum];         // already visited
        
        bool take=solve(index+1,target,nums,N,sum+nums[index],dp);
        bool nottake=solve(index+1,target,nums,N,sum,dp);
        
        return dp[index][sum]= (take || nottake);    // bool that's why OR
    }
    
    bool canPartition(vector<int>& nums) {
        
        int res=0;
        int N=nums.size();

        for(int i=0;i<N;i++)  res+=nums[i];
        
        if(res%2!=0) return false;
        
        int target=res/2;

        vector<vector<int>>dp(N+1,vector<int>(target+1,-1));
        return solve(0,target,nums,N,0,dp);
    }
};