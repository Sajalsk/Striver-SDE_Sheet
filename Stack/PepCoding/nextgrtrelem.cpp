#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
         stack<int> s;
        int n=nums.size();
        
        vector<int> v(n,0);
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=nums[i]) 
                s.pop();
            
            if(!s.empty()) v[i]=s.top();
            else v[i]=-1;
            s.push(nums[i]);
        }
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=nums[i]) s.pop();
            if(!s.empty()) v[i]=s.top();
            else v[i]=-1;
            s.push(nums[i]);
        }
        return v;
        
    }
};