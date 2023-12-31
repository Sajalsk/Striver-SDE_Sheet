#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void sortColors(vector<int>& nums) {
        
        int n=nums.size();
        int low = 0, mid = 0, high = n - 1; 

    while (mid <= high) {                      // !important mid<high;
        
        if (nums[mid] == 0) {                 // !important nums[mid];
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        
        else if (nums[mid] == 1)  mid++;
        
        else if (nums[mid] == 2) {
            swap(nums[mid], nums[high]);
            high--;
        }
      }    
    }
};