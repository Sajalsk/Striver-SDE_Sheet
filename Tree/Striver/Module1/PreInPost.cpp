#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
    public:
    
    T data;
    vector <TreeNode*> children;
    
    TreeNode(T data)
    {
        this->data=data;
    }

class Solution {
public:
    vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    stack<pair<BinaryTreeNode,int>>st;
    
    if(!root)  return NULL;
    
    st.push({root,1});
    
    vector<int>pre,in,post;

    while(!st.empty()) {
        
        auto it=st.top();
        st.pop();

        if(it.second==1) {
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
        }

        if (it.first -> left != NULL) {
        st.push({it.first -> left,1});
      }
      
        if(it.second==2) {
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
        }

         if (it.first -> right != NULL) {
          st.pushst.push({it.first -> right,1});
      }

        if(it.second==3) {
            post.push_back(it.first->data);
           
        }

        return {pre,in,post};
    }
    }
};
};