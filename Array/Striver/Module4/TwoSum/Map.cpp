#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        unordered_map<int, int> mpp;
               
    for(int i=0;i<n;i++) {

            if(mpp.find(target-nums[i])!=mpp.end()) {
                 return {i,mpp[target-nums[i]]};    // index of ( target - nums[i] )element
            } 
             mpp[nums[i]] = i;        // storing that number and it's index
        }
         return {-1,-1};
    }
};