//Function to return a list containing the bottom view of the given tree.
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
    vector <int> bottomView(Node *root) {

        vector<int> ans; 
        if(root == NULL) return ans; 
 
        queue<pair<Node*, int>> q; 
        q.push({root, 0});

        map<int,int> mpp; 

        while(!q.empty()) {

            auto it = q.front();           // Imp Line
            q.pop();   

            TreeNode* node = it.first;   // node=2 line=0;
            int line = it.second; 

           
            mpp[line] = node->data;   // 0,2   // overwritten
            
            if(node->left != NULL)   q.push({node->left, line-1}); 
            if(node->right != NULL)  q.push({node->right, line + 1}); 
            
        }
        
        for(auto it : mpp) {
            ans.push_back(it.second); 
        }
        return ans;  
    }
};

};