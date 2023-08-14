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

    class BSTIterator {
    public:
    
    stack<TreeNode*> stk;
    
    void pushAll(TreeNode* root) {

        while (root) {
            stk.push(root);
            root= root->left;
        }
    }
    
    BSTIterator(TreeNode* root)  {
         pushAll(root);
    }
       
    
    int next() {
        TreeNode* node= stk.top();
        stk.pop();
        pushAll(node->right);
        return node->val;
    }

    bool hasNext() {
         return (!stk.empty());
     } 
    
};

};
