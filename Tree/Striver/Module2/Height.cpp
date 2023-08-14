#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
    public:
    
    T data;
    vector <TreeNode*> children;
    
    TreeNode(T data) {
        this->data=data;
    }

    
     class Solution {
     public:

    int maxDepth(TreeNode* root) {
        
        if(!root) return 0;
        
        int lh=0,rh=0; 
        
         lh +=   maxDepth(root->left);
         rh +=   maxDepth(root->right);
        
        return 1+max(lh,rh);
    }
};

};
