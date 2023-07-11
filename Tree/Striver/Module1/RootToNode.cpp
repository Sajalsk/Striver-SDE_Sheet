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

void solve(TreeNode<int> *root, int x,vector<int>&arr) {

    if(!root) return;
    arr.push_back(root->data);

    if(root->data==x) return;

    solve(root->left,x,arr);
    solve(root->right,x,arr);

    if(arr[arr.size()-1]!=x)           // bcz lastly filled with arr.push_back(root->data);
    arr.pop_back();

}

vector<int> pathInATree(TreeNode<int> *root, int x) {

    if(!root) return {};

    vector<int>arr;
    solve(root,x,arr);

    return arr;
}
};
