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
      vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> level;
        if(!root) return level;
    
        queue<TreeNode*> q({root});
        
         while(!q.empty()) {
            
            vector<int> ans;
            int size = q.size();

            for (int i=0;i<size;i++) {
            
            TreeNode* node = q.front();
            q.pop();

            if(node->left)  q.push(node->left); // keep left of that root to check whether its left exist not
            if(node->right) q.push(node->right);
            
            ans.push_back(node->val);        // push that root into the ans array.  
         }
            level.push_back(ans);    
        }
         return level;
    }
};

};