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

int main() {

class Solution {
public:
    
    int Solve(TreeNode*root,int &max1) {
        
        if(!root) return 0;
        
        int lh = Solve(root->left, max1);            //  sub - children sum of al  the left children
        int rh = Solve(root->right,max1);
        
        if(lh<0) lh=0;                               // kadanes algorithm
        if(rh<0) rh=0;
        
        max1 = max(max1,root->val+lh+rh);          // child subtree of all the nodes picking up maximum
        
        return root->val+max(lh,rh);               // left or right tree
    }
    
    int maxPathSum(TreeNode* root) {
        
        int max1=INT_MIN;
        
        Solve(root,max1);
        return max1;
    }
};
};                     


};  