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

    vector<int> preorderTraversal(TreeNode* root) {

    vector < int > preorder;
    TreeNode * cur = root;

  while (cur != NULL) {

    if (cur -> left == NULL) {
      preorder.push_back(cur -> val);
      cur = cur -> right;
    } else {
      TreeNode * prev = cur -> left;
      while (prev -> right != NULL && prev -> right != cur) {     // first make a thread bw right and curr
        prev = prev -> right;
      }

      if (prev -> right == NULL) {                // make a thread bw right and curr;
        prev -> right = cur;
        preorder.push_back(cur -> val);          // Change in insertion for value in preorder
        cur = cur -> left;
      } else {                                   // right is already pointing to the curr so unthread it.
        prev -> right = NULL;
        cur = cur -> right;
      }
    }
  }
     return preorder;
    }
};
};