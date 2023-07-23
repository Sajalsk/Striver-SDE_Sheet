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

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
         while (root) {
             
            if (p->val < root->val && q->val < root->val)       root = root->left;   
            else if (p->val > root->val && q->val > root->val)  root = root->right;
               
            else return root;
        }
           return root;
    }

    };
};