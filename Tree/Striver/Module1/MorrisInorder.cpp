#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
    public:
    
    T data;
    vector <TreeNode*> children;
    
    TreeNode(T data){
        this->data=data;
    }

class Solution {
public:
      vector<int> inorderTraversal(TreeNode* root) {

       vector < int > inorder;

       TreeNode * cur = root;

  while (cur != NULL) {

    if (cur -> left == NULL) {
      inorder.push_back(cur -> val);
      cur = cur -> right;
    } else {
      TreeNode * prev = cur -> left;
      while (prev -> right != NULL && prev -> right != cur) {     // first make a thread bw right and curr
        prev = prev -> right;
      }

      if (prev -> right == NULL) {     // make a thread bw right and curr;
        prev -> right = cur;
        cur = cur -> left;
      } else {               // right is already pointing to the curr so unthread it.
        prev -> right = NULL;
        inorder.push_back(cur -> val);
        cur = cur -> right;
      }
    }
  }
   return inorder;
    }
};
};