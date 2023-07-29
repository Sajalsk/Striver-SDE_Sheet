#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node {
public:
    T data;
    vector<Node *> children;

    Node(T data) {
        this->data = data;
    }
    class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        if(nums.size()==1) return nums[0];
        int l=0,h=1,n=nums.size();
        
        for (int i=0;i<n-1;i++) {
            if(nums[l]!=nums[h]) return nums[l];
            else l+=2 , h+=2;
        }
         return -1;
    }
};
};