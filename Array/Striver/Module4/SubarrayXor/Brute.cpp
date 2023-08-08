#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    int XorSub(vector<int>nums,int k) {

        int count=0,currxor=0;

    for (int i=0;i<nums.size();i++) {
          currxor=0;
        for(int j=i;j<nums.size();j++) {          // 4 2 2 6 4    6
          currxor^=nums[j]; 
          if(currxor==k)  count++; 
    }
  }
    return count;
    }
};


//  O(n^3) subset

/*
for(int i=0;i<n;i++) {
    for(int j=i;j<n;j++) {
        int xorr=0;
        for(int k=i;k<=j;k++) {
            (xorr^=nums[k])
            if(xorr==res) count++;
        }
    }
}
*/