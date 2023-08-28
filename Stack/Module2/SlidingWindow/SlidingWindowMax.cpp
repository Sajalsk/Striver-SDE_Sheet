#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) { //  nums = [1,3,-1,-3,5,3,6,7], k = 3

        deque<int>d;                                         //  [3,3,5,5,6,7]
        vector<int>res;

        for(int i=0;i<nums.size();i++) {
           
            if(!d.empty() && d.front()==i-k)   d.pop_front();
            
            while(!d.empty() && nums[i]>nums[d.back()])
                d.pop_back();
            
            
            if(i>=k-1) res.push_back(nums[d.front()]);
            d.push_back(i);
        }
         return res;
        
        
    }
};