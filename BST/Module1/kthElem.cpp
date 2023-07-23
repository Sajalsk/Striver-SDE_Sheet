#include <bits/stdc++.h>
using namespace std;
template <typename T>

class TreeNode {
public:
    T data;
    vector<TreeNode *> children;

    TreeNode(T data) {
        this->data = data;
    }
    
class Solution {
public:
    
    TreeNode* solve(int left , int right , vector<int>&nums ){
        
        if(left>right)  return nullptr;

        int mid = left + (right-left)/2;
        
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = solve(left , mid-1 ,nums);
        root->right= solve(mid+1 , right , nums);
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(0,nums.size()-1,nums);
    }
};
};