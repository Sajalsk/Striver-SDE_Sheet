#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
    public:
    
    T data;
    vector <TreeNode*> children;
    
    TreeNode(T data)
    {
        this->data=data;
    }

int main() {
    
    int countNodes(TreeNode * root) {
        if(root==NULL) {
            return 0;
        }
        
        int ans = 1+max(countNodes(root->left),countNodes(root->right));
        
        return ans;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL) {
            return 0 ;
        }
        
        int opt1= countNodes(root->left) + countNodes(root->right);

        int opt2= diameterOfBinaryTree(root->left);   // adding left nodes recur   
        int opt3= diameterOfBinaryTree(root->right);         // adding right nodes recur
        
        int ans  =max(opt1,max(opt2,opt3));
        
        return ans;
        
    }
}

};