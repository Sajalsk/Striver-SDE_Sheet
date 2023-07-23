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
        #include <bits/stdc++.h> 

int findCeil(BinaryTreeNode<int> *TreeNode, int x){
   
   int ans =-1;
   while(node) {

       if(x==TreeNode->data)  return TreeNode->data;
          
       if(x>TreeNode->data)  TreeNode=TreeNode->right;
          
       else {
             ans=node->data;
             TreeNode=TreeNode->left;
       }
   }

   return ans;
}

    };

};