#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
       int n =nums.size(),max1=INT_MIN,prod=1;
        
        for (int i=0;i<n;i++) {
            prod= prod*nums[i];
            max1=max(max1,prod);
            if(prod==0) prod=1;
            
        }
        
        prod=1;
        for (int i=n-1;i>0;i--) {
            prod= prod*nums[i];
            max1=max(max1,prod);
            if(prod==0) prod=1;
        }
        
        return max1;
    }
};