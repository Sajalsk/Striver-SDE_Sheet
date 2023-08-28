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
    
    vector<int>res;
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root==NULL) return res;
        
        inorderTraversal(root->left);
        res.push_back(root->val);
        inorderTraversal(root->right);
        
        return res;
    }
};

// Preorder
class Solution {
public:
    
    vector<int>res;
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(root==NULL) return res;
        
        res.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        
        return res;
        
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