#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Node {
public:
    T data;
    vector<Node *> children;

    Node(T data) this->data = data;
  
class Solution {
public:

    int search(vector<int>& nums, int target) {
        
        int low=0;
        int high=nums.size()-1;
        
        while(high>=0) {

            if(nums[low]==target) return low;
            else if (nums[high]==target) return high;
            else {
                high--;
                low++;
            }
        }
         return -1;
    }
};

};