#include <bits/stdc++.h>
using namespace std;

template <typename T>

class TreeNode {
    
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
        
   bool check(TreeNode* curr,TreeNode* temp) {
                
           if(curr==NULL && temp==NULL) return true;
           if(curr==NULL || temp==NULL) return false;
           
           if(curr->val!=temp->val) return false;
           
           return (check(curr->right,temp->left) && check(curr->left,temp->right));  // Inside check       
        }
        
    bool isSymmetric(TreeNode* root) {
        
            TreeNode *curr = root->left;
            TreeNode *temp = root->right;
            
            return check(curr,temp);
    }
};
      
   
};
       
};  