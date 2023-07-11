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
   bool isSameTree(TreeNode* p, TreeNode* q) {
            
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        
        if(p->val != q->val) return false;
        
    if(isSameTree(p->left, q->left) && isSameTree(p->right, q->right)){
            return true;
        }
            
        return false;
    }                                  // end of problem function
}; // End of main fn

};  // End of Class TreeNode;