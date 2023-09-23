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

    TreeNode* searchBST(TreeNode* root, int val) {
      
        TreeNode *curr = root ; 

        while(curr != NULL) {
            
            if (curr -> val == val)  return curr ; 
            if (curr -> val > val)  curr = curr -> left; 
            else  curr = curr -> right ;    
        }
         return NULL ;  
    }
};

};
