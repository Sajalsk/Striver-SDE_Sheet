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
    
   
};
class Solution {
public:
    bool checkBST(TreeNode* root, TreeNode* min, TreeNode* max) {
        if (root == NULL)    return true;
         
        if ((min != NULL && root->val <= min->val) || (max != NULL && root->val >= max->val))   return false;
        return checkBST(root->left, min, root) && checkBST(root->right, root, max);  
    }

    bool isValidBST(TreeNode* root) {
        if (root->left == NULL && root->right == NULL) return true;
        return checkBST(root, NULL, NULL); 
    }
};

};