#include <bits/stdc++.h>
using namespace std;

class Solution {
     public:
    
bool solve(int index,int target, vector<int>&nums, int N,int sum) {
        
        if(index>=N)   return false ;
        if(sum>target) return false;
        
        if(sum==target) return true;
        
        bool take=solve(index+1,target,nums,N,sum+nums[index]);
        bool nottake=solve(index+1,target,nums,N,sum);
        
        return (take || nottake);
    }
    
    bool canPartition(vector<int>& nums) {
        
        int res=0;
        int N=nums.size();

        for(int i=0;i<N;i++)   res+=nums[i];
       
        if(res%2!=0) return false;
        int target=res/2;
        
        return solve(0,target,nums,N,0);
    }
};