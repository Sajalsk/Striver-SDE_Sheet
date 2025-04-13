#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int>ans;
        stack<int>st;
        
        int n=nums2.size();

        unordered_map<int,int>mp;

        for(int i=n-1;i>=0;i--) {                       

            while(!st.empty() && nums2[i]>=st.top()) {
                st.pop();
            }
              int res=(st.empty())? -1 : st.top();
          
            mp.insert({nums2[i],res});                     
            st.push(nums2[i]);   
        }

        for(auto it:nums1)  ans.push_back(mp[it]);         

        return ans;

    }
};
