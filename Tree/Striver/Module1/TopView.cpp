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
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root) {
       vector<int> ans; 

        if(root == NULL) return ans; 

        queue<pair<Node*, int>> q; 
        q.push({root, 0}); 

        map<int,int> mpp; 
    
        while(!q.empty()) {

            auto it = q.front();       // Imp Line
            q.pop(); 

            TreeNode* node = it.first; 
            int line = it.second; 

            if(mpp.find(line) == mpp.end()) mpp[line] = node->data;   // change from bottom view
            
            if(node->left != NULL)   q.push({node->left, line-1}); 
            if(node->right != NULL)  q.push({node->right, line + 1});
            
        }
        
        for(auto it : mpp) {
            ans.push_back(it.second); 
        }
        return ans;
    }
}

};