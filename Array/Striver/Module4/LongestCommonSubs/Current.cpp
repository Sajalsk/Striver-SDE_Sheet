#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector < int > & nums) {
  
        int n = nums.size(),max1=0,count=0;
        unordered_set<int> s(nums.begin(),nums.end());   // 1 2 4 5 6 0 4 9 11
        
       for (int i=0;i<n;i++) {
        int curr=nums[i];
        
        if(s.find(curr-1)!=s.end()) {
            continue;
        }
        
        else {
            while(s.find(curr)!=s.end()) {
                count++;
                curr++;
            }
        }
        
        max1  = max(max1,count);
        count=0;
    }
    
    
    return max1;
        
    }
    
        
    
};