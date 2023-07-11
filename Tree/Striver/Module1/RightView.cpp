#include <bits/stdc++.h>
using namespace std;
template <typename T>
class TreeNode {
    public:
    
    T data;
    vector <TreeNode*> children;
    
    TreeNode(T data) {
        this->data=data;
    }

class Solution {
public:
    void solve(TreeNode* root,vector<int>& arr,int len) {

        if(!root) return;
        if(arr.size()==len){
            arr.push_back(root->val);
        }

        solve(root->right,arr,len+1);
        solve(root->left,arr,len+1);   
    }
    
    vector<int> rightSideView(TreeNode* root) {
         vector<int> arr;
        solve(root,arr,0);
        return arr;
    }
};
};

