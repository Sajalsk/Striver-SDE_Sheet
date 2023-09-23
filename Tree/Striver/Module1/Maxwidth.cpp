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

    int widthOfBinaryTree(TreeNode* root) {

      int start,end,dif,res=1;

        queue<pair<TreeNode*,long>> q;
        q.push({root,1});
       
        while(!q.empty()) {

            int n = q.size();

            for(int i=0;i<n;i++)  {

            auto it = q.front();          
            q.pop();   

            TreeNode* node = it.first;   // node=2 line=0;
            long pos = it.second; 

                if(i==0) {
                    start = pos;
                    dif   = pos-1;
                }

                if(i==n-1) end = pos;
                pos -= dif;

                if(node->left!=NULL)  q.push({node->left,pos*2-1});
                if(node->right!=NULL) q.push({node->right,pos*2});
            }
             res = max(res,end-start+1);
        }
        return res;
    }
};

};