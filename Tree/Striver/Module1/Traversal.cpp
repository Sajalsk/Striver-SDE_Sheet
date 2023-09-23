#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
    public:
    
    T data;
    vector <TreeNode*> children;
    
    TreeNode(T data){
        this->data=data;
    }

// Inorder

class Solution {
public:
    
    vector<int>inorder;
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root==NULL) return inorder;
        
        inorderTraversal(root->left);
        inorder.push_back(root->val);
        inorderTraversal(root->right);
        
        return inorder;
    }
};

// Preorder
class Solution {
public:
    
    vector<int>preorder;
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(root==NULL) return preorder;
        
        preorder.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        
        return preorder;
        
    }
};

// PostOrder
class Solution {
public:

 vector<int> postorder;
    
    TreeNode <int>* postorderTraversal(TreeNode* root) {
        
        if(root==NULL)  return postorder;
      
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        postorder.push_back(root->val);
        
        return postorder;
    }
 };
};