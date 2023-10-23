#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n=nums2.size();
        
        vector<int>ans;
        stack<int>st;

        unordered_map<int,int>mp;
       
        for(int i=n-1;i>=0;i--) {                          //  [4,1,2]  [1,3,4,2]     [-1,3,-1]  [3,4,-1,-1]

            while(!st.empty() && nums2[i]>=st.top()) {     // Selection array
                st.pop();
            }

            int res=(st.empty())? -1 : st.top();
          
            mp.insert({nums2[i],res});                    // num and its result
            st.push(nums2[i]);   
        }

        for(auto it:nums1)  ans.push_back(mp[it]);          // given query and its result

        return ans;

    }
};
