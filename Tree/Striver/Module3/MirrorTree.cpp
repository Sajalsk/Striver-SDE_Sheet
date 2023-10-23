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

    void Solve(TreeNode *root) {

        if(root) {
            
            TreeNode *temp = root->left;     // swapping
            root->left     = root->right;
            root->right= temp;

            mirror(root->left);
            mirror(root->right);
        }
    }

    void mirror(TreeNode* root) {
        Solve(root);
    }
};

};