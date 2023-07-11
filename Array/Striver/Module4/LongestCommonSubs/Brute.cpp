#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n=nums.size();
        int count=1,max1=1;
        
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        unique(nums.begin(),nums.end());
     
        for(int i=0;i<n-1;i++) {
            
            if(nums[i]-nums[i+1]==-1){
                    count++;
            }
            
            else {
            max1=max(max1,count);
            count=1;
            }
        }
        
        max1=max(max1,count);

        return max1;
       
        
    }
};