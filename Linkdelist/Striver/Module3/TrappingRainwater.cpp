#include <bits/stdc++.h>
using namespace  std; 

class Solution {
public:

    int trap(vector<int>& height) {    // Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
        
        int ans=0,n=height.size();
        
        vector<int>l(n);
        vector<int>r(n);
        
        l[0]  =height[0];
        r[n-1]=height[n-1];
        
        for(int i=1;i<n;i++)     l[i]=max(l[i-1],height[i]);
        for(int i=n-2;i>=0;i--)  r[i]=max(r[i+1],height[i]);
      
        for(int i=0;i<n;i++)     ans+=min(l[i],r[i])-height[i];
           
        return ans;
    }
};