#include <bits/stdc++.h>
using namespace std;
template <typename T>

class TreeNode {
public:
    T data;
    vector<TreeNode *> children;

    TreeNode(T data) {
        this->data = data;
    }

    class Solution {
        public:
      
    int CeilInBST(TreeNode<int> * root, int X) {
    
    int Ceil=-1;
    while(root) {
        
        if(root->val==X) return root->val;

        if(root->val>X) {
            Ceil=root->val;
            root=root->left;
        } 
         else root=root->right;
        
    }
     return Ceil;
}

 };

};
