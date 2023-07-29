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
      

int findCeil(BinaryTreeNode<int> *TreeNode, int x){
   
   int ceil =-1;
   while(TreeNode) { 

       if(TreeNode->data==x)  return TreeNode->data;
          
       if(x<TreeNode->data)  {

         ceil=TreeNode->data;
         TreeNode=TreeNode->left;
       }
          
       else  TreeNode=TreeNode->right;
   }
    return ceil;
}
 };

};
