#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void next(vector<int> nums) {
         
         next_permutation(nums.begin(),nums.end());

         for (int i=0;i<nums.size();i++) {
                 cout<<nums[i];
         }  
    }
            
    };
