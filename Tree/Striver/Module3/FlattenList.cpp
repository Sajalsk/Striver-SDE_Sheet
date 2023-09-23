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
   
    void flatten(TreeNode* root) {
        
        stack<TreeNode*>st({root});
        
        while(!st.empty()) {
            
             TreeNode*curr= st.top();
             st.pop();
            
            if(curr && curr->right) st.push(curr->right);
            if(curr && curr->left)  st.push(curr->left);
            
            if(!st.empty()) curr->right = st.top();
            if(curr) curr->left=NULL;
        }
    }
};     
   
};
       
};  