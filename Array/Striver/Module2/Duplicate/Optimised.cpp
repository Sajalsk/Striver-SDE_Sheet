#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int i=0,n=nums.size();
        vector<int>arr(n+1,0);
        
        for( i=0;i<n;i++)  arr[nums[i]]++;
      
        for( i=0;i<n;i++) {
            if(arr[i]>1) return i;
        }
        
        return i;
    }
};