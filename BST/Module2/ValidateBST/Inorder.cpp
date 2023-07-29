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
    vector<int> res;
    void inorder(TreeNode* root) {          // Inorder keeps the BT in sorted way

        if (root->left) inorder(root->left);

        res.push_back(root->val);

        if (root->right) inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {

        inorder(root);

        for (int i = 0; i < res.size() - 1; i++) {
            if (res[i] >= res[i+1]) return false;
        }
        return true;
    }

   
};
};