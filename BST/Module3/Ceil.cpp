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
      
    
int findCeil(BinaryTreeNode<int> *node, int x){
   
   int Ceil=-1;
    while(node) {
        
        if(node->data==x) return node->data;

        if(x<node->data) {
            Ceil=node->data;
            node=node->left;
        } 
         else node=node->right;
        
    }
     return Ceil;
}

 };

};
