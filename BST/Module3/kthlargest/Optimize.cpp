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

    int findKthLargest(vector<int>& nums, int k) {
         if(!root)  return -1;
       
       int rightans=findKthLargest(root->right,k); 
       return rightans;
        
        k--;
        
        if(k==0)  return root->val;

        int leftans=findKthLargest(root->left,k);  // for left skew
        if(leftans!=-1)  return leftans;
    }
};

};