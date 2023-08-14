#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int> s;
        int n=nums.size();
        vector<int> v(n,0);
        
        for(int i=n-1;i>=0;i--) {
            while(!s.empty() && nums[i]>=s.top()) 
                s.pop();
            
            v[i]=(s.empty())?-1:s.top();
            s.push(nums[i]);
            
        }
        
        for(int i=n-1;i>=0;i--)  {                    // for Circular
             while(!s.empty() && nums[i]>=s.top()) 
                s.pop();
            
          v[i]=(s.empty())?-1:s.top();
            s.push(nums[i]);
        }
        
        return v;
        
    }
};
       