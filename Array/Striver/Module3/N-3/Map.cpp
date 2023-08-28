#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> mpp;
        
        vector<int>ans;
        int n=nums.size(),k=0,a;

        for (int i=0;i<n;i++)  mpp[nums[i]]++;
            
        for (auto it:mpp) {
            if(it.second>n/3) {
              ans.push_back(it.first);
               
            }
        }
         return ans;
    }
};