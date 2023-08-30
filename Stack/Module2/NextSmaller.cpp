#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

 vector<int> Solution::prevSmaller(vector<int> &nums) {   // 4, 5, 2, 10, 8
    
    vector<int> res;
    stack<int>  s;

    int n = nums.size();
    
    res.push_back(-1);
    s.push(nums[0]);
    
    for(int i=1;i<n;i++) {
        
        while(s.size()!=0 && nums[i]<=s.top())  s.pop();
    
        int val=(s.empty())?-1:s.top();
        res.push_back(val);
    }
      return res;
 }
};