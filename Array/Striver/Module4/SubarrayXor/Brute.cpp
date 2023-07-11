#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    int XorSub(vector<int>nums,int k) {
        int count=0,currxor=0;

    for (int i=0;i<nums.size();i++) {
          currxor=0;
    for(int j=i+1;j<nums.size();j++) { // 4 2 2 6 4    6
        currxor=nums[i]^nums[j]; 

        if(currxor==k) {
            count++;
        }
    }
}
    return count;
    }
};