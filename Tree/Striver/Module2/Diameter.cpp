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
    
     int ans=0,curr;
     int height(TreeNode* root) {
         
        if(!root) return 0;

        int lh=height(root->left);
        int rh=height(root->right);
         
        curr=lh+rh;
         
        ans=max(ans,curr);
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        height(root);
        return ans;
    }
};
};