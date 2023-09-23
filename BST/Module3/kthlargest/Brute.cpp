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
    
    vector<int>res;
    void solve(TreeNode*root) {

        if(!root) return;
        
        solve(root->left);
        res.push_back(root->val);
        solve(root->right);
        
    }
    
    int findKthLargest(TreeNode* root, int k) {
       
        solve(root);
        sort(res.begin(),res.end());
        int n=res.szie();
        
        return res[n-k-1];
    }
};
    

};