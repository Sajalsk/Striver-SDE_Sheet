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

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL || root==p || root==q) return root;
        
        TreeNode*left = lowestCommonAncestor(root->left,p,q);
        TreeNode*right= lowestCommonAncestor(root->right,p,q);
        
        if(left==NULL)  return right;
        if(right==NULL) return left;  
        
        else return root;
    }
};                             
};  