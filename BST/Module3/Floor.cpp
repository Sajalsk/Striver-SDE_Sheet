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

    int floorInBST(TreeNode<int> * root, int X) {

    int floor=-1;
    
    while(root) {
        
        if(root->val==X) return root->val;

        if(X>root->val) {
            floor=root->val;
            root=root->right;
        } 
         else root=root->left;
        
    }
     return floor;
}
};

};