#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0; i<n-k+1; i++) {
            int mx = INT_MIN;
            for(int j=i; j<i+k; j++) {
                mx = max(mx, nums[j]);
            }
            ans.push_back(mx);
        }
        return ans;
    }
};