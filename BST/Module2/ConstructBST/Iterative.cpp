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
    
     TreeNode* sortedArrayToBST(vector<int>& nums) {
        
         if(nums.size()==0) return NULL;
         if(nums.size()==1) return new TreeNode(nums[0]);
         
         int middle = nums.size()/2;
         TreeNode* root = new TreeNode(nums[middle]);
         
         vector<int> leftsub(nums.begin(), nums.begin()+middle);
         vector<int> rightsub(nums.begin()+ middle+1, nums.end());
         
         root->left = sortedArrayToBST(leftsub);
         root->right = sortedArrayToBST(rightsub);
         
         return root;
     }
 };
};