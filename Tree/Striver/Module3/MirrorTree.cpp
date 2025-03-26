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

    void mirror(Node* root) {
       
        if(root) {
            Node* temp = root->left; // Swapping left and right
            root->left = root->right;
            root->right = temp;
            
            mirror(root->left);
            mirror(root->right);
        }
    }
};

};