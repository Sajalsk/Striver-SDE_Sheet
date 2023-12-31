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

    vector<string> res;
    void solve(TreeNode* root, string temp) {
         
        if (root==NULL) return;
         
        if(root->left==NULL && root->right==NULL) {

            temp=temp+to_string(root->val);
            res.push_back(temp);
            return;
        }

        temp+= to_string(root->val)+ "->";

        solve(root->left,temp);
        solve(root->right,temp);
    }

    vector<string> binaryTreePaths(TreeNode* root) {

        string temp="";
        solve(root,temp);
        
        return res;
    }
}
};