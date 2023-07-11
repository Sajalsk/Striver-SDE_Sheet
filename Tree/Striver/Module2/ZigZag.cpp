#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode{
    
    public:
    
    T data;
    TreeNode* left;
    TreeNode* right; 
    
    TreeNode( T data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }

int main() {
        class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
        return ans;
        queue<TreeNode*> q;
        q.push(root);
      
        while(!q.empty())
        {
            int a=q.size();
            vector<int> v;
              for(int i=0;i<a;i++)
              {
                TreeNode* node=q.front();
                q.pop();
                v.push_back(node->val);
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
               
            }
             

            ans.push_back(v);
        }
   for(int i=0;i<ans.size();i++){
      if(i%2!=0){
          reverse(ans[i].begin(),ans[i].end());
      }
   }
        return ans;
    }
};
        }
};