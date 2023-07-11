// Input: nums = [1,5,11,5]
// Output: true
// Explanation: The array can be partitioned as [1, 5, 5] and [11].

#include <bits/stdc++.h>
using namespace std;
class Solution{
     public:
    
bool solve(int index,int target, vector<int>&arr, int N,int sum) {
        
        if(index>=N) return false ;
        if(sum>target) return false;
        if(sum==target) return true;
        
         bool take=solve(index+1,target,arr,N,sum+arr[index]);
        bool nottake=solve(index+1,target,arr,N,sum);
        
        return (take || nottake);
    }
    
    bool canPartition(vector<int>& arr) {
        
        int res=0;
        int N=arr.size();

        for(int i=0;i<N;i++) {
            res+=arr[i];
        }
        
        if(res%2!=0) return false;
        
        int target=res/2;
        
        return solve(0,target,arr,N,0);
    }
};