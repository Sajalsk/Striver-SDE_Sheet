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
    TreeNode* searchBST(TreeNode* root, int val) {
        
            if(!root) return NULL;
            
            if(root->val==val) return root;
            if(root->val>val)    return searchBST( root->left, val);
            else if(root->val<val) return searchBST( root->right, val);
               
        
        
        return NULL;
    }
};
};
/*
// Iteratively

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
      
        TreeNode *curr = root ; 

        while(curr != NULL) {
            
            if (curr -> val == val)  return curr ; 
            if (curr -> val > val)  curr = curr -> left; 
            else  curr = curr -> right ;    
        }
        return NULL ;  
    }
};

*/