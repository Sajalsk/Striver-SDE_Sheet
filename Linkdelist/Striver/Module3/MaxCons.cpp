#include <bits/stdc++.h>
using namespace std;

// Running Time

class Solution {
public:

    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count=0,max1=0;
        for(int i=0;i<=nums.size();i++) {
            
            if(nums[i]==1) count++;
            
            else {
              max1 = max(max1,count);
              count=0;
            }
        }
        
       return max1; 
    }
};

// Running 

/*
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int  count=0, max=0;
        
        for(int i=0 ; i<nums.size() ; i++) {
            if(nums[i]==1) {
                count++;
                if(count>max)  max = count;
            } else   count=0;
        }
         return max;
    }
};

*/