#include <bits/stdc++.h>
using namespace std;
template <typename T>

class TreeTreeNode{
    public:
    
    T data;
    TreeTreeNode* left;
    TreeTreeNode* right; 
    
    TreeTreeNode( T data) {
        this->data=data;
        left=NULL;
        right=NULL;
    }

    class Solution {
    public:
    void mirror1(TreeNode *root) {

        if(root) {
            
            TreeNode *temp= root->left;     // swapping
            root->left= root->right;
            root->right= temp;

            mirror(root->left);
            mirror(root->right);
        }
    }

    void mirror(TreeNode* root) {
        mirror1(root);
    }
};

};