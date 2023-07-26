#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

 vector<int> Solution::prevSmaller(vector<int> &nums) {   // 4, 5, 2, 10, 8
    
    vector<int> v;
    stack<int> s;
    int n = nums.size();
    
    v.push_back(-1);
    s.push(nums[0]);
    
    for(int i = 1;i<n;i++) {
        
        while(s.size()!=0 && nums[i]<=s.top()) {
            s.pop();
        }
        
        (s.empty()) ? v.push_back(-1):v.push_back(s.top());

    }
     return v;
}
};