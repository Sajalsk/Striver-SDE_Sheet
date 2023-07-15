#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int count;
   
    void checkCount(vector<int>& nums, int low, int mid, int high){

        // Two pointers;
        int left = low, right = mid + 1;

        while(left <= mid && right <= high) {
            if((long)nums[left] > (long) 2 * nums[right]){
                count += (mid - left + 1);
                right++;
            } else{
                left++;
            }
        }

       // Worst case might be nlog(n) 
        sort(nums.begin() + low, nums.begin() + high + 1);
        return;
        
    }
        
    void mergeSort(vector<int>& nums, int low, int high) {

        if(low == high) return;
        
        int mid = (low + high)/2;

        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);
        
        checkCount(nums,low,mid,high);
        return;
        
    }

    int reversePairs(vector<int>& nums) {

        if(!nums.size())return 0;
        count = 0;
        mergeSort(nums,0,nums.size()-1);
        return count;
    }
};