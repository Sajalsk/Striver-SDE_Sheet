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
        int lh=0,rh=0;
        
        lh+=Solve(root->left);
        rh+=Solve(root->right);
         
        curr=lh+rh;
        ans=max(ans,curr);
        
        return 1+max(lh,rh);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        height(root);
        return ans;
    }
};
};