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

    void solve(BinaryTreeNode<int> *root, vector<string> &ans, string res) {

        if (root->left == NULL && root->right == NULL) {
            ans.push_back(res);
            return;
        }

        if (root->left)  solve(root->left, ans, res + " " + to_string(root->left->data));
        if (root->right) solve(root->right, ans, res + " " + to_string(root->right->data));      
    }

    vector<string> allRootToLeaf(BinaryTreeNode<int> *root) {

        vector<string> ans;

        if (root == NULL)  return ans;

        solve(root, ans, to_string(root->data));
        return ans;
    };
};
