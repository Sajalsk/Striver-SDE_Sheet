#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size(),x,y;
        unordered_map<int, int> mpp;
      //    vector<int> v;            v.push_back(i) , v.push_back(mpp[target-nums[i]]);

    for(int i=0;i<n;i++) {
            if(mpp.find(target-nums[i])!=mpp.end()) {
                 x=i;
                 y=mpp[target-nums[i]];      // index of second elme;
                return {x,y};
            } 
            
             mpp[nums[i]] = i;        // storing that number and it's index
        }

       return {-1,-1};
    }
};