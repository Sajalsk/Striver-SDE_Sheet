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
    
    int kthSmallest(TreeNode* &root, int &k) {
        
        if(!root)  return -1;
       
        int leftans=kthSmallest(root->left,k);
        if(leftans!=-1)  return leftans;
           
        k--;
        
        if(k==0)  return root->val;
       
        int rightans=kthSmallest(root->right,k); // for right skew
        return rightans;
    }
};

};