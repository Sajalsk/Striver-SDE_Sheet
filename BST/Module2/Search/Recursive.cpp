#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode *> children;

    TreeNode(T data) this->data = data;
   
    class Solution {
    public:
    TreeNode* searchBST(TreeNode* root, int val) {
        
            if(!root) return NULL;
            
            if(root->val==val)     return root;
            if(root->val>val)      return searchBST( root->left, val);
            else if(root->val<val) return searchBST( root->right, val);
               
        
        
        return NULL;
    }
};
};
