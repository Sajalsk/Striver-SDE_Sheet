#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode{
    
    public:
    
    T data;
    TreeNode* left;
    TreeNode* right; 
    
    TreeNode( T data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
    
int main() {
   class Solution {
   public:
      
    int maxPathSum(TreeNode* root) {
            
        TreeNode *curr = root;
            if(root==NULL) return 0;
          
             int lsum=maxPathSum(root->left);
             int rsum=maxPathSum(root->right);
            
            return lsum+rsum+curr->val;
             
    }
};
       
};                     


};  