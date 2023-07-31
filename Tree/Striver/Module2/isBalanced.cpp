#include <bits/stdc++.h>
using namespace std;

template <typename T>

class TreeNode{
    public:
    
    T data;
    TreeNode* left;
    TreeNode* right; 
    
    TreeNode( T data) {
        this->data=data;
        left=NULL;
        right=NULL;
    }


class Solution {
public:

    bool ans=true;
    int checkBalance(TreeNode* root) {
        
        if(!root) return 0;
        
        int lh = checkBalance(root->left);
        int rh = checkBalance(root->right);
        
        if(abs(lh-rh) > 1) ans = false;
        return 1 + max(lh, rh);  // since returning i.e its a balanced tree and ans is true globally
    }
    
    bool isBalanced(TreeNode* root){
       
        checkBalance(root);
        return ans;
    }
};

};