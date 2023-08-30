#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
int LIS (vector<int>& nums,int n , int i ,int j, vector<vector<int>> &dp) {
        
        if(i==n) return 0;
        if(dp[i][j+1]!=-1)  return dp[i][j+1];               // imp in j+1.
        
        int len = 0+LIS(nums,n,i+1,j,dp);
            
        if(j==-1 || nums[i]>nums[j]) {
             len = max(len,1+LIS(nums,n,i+1,i,dp));         // prev==curr (j==i)
        }
           return dp[i][j+1] = len;  
    }
    
    int lengthOfLIS(vector<int>& nums) {

        int n = nums.size();

        vector<vector<int>> dp(n,vector<int>(n+1,-1));

        return LIS (nums,n,0,-1,dp);                        // curr , prev
    } 
};