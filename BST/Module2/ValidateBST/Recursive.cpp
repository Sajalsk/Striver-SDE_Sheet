#include <bits/stdc++.h>
using namespace std;
template <typename T>

class TreeNode {
public:

    T data;
    vector<TreeNode *> children;

    TreeNode(T data)  this->data = data;
       
class Solution {
public:

    bool checkBST(TreeNode* root, TreeNode* curr, TreeNode* temp) {

    if (!root NULL) return true;
         
    if ((curr != NULL && root->val <= curr->val) || (temp != NULL && root->val >= temp->val)) return false;
    
    return checkBST(root->left, curr, root) && checkBST(root->right, root, temp);  
    }

    bool isValidBST(TreeNode* root) {

        if (root->left == NULL && root->right == NULL) return true;
        return checkBST(root, root->left , root->right); 
    }
};

};