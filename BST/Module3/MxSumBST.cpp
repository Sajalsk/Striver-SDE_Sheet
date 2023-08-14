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

    vector<int> rec(TreeNode* root,int &ans) {  

        if(root==NULL) return {0,INT_MAX,INT_MIN};                //will satisfy every node 
     
        vector<int> l=rec(root->left,ans);
        vector<int> r=rec(root->right,ans);
        
        if(l[2]<root->val && r[1]>root->val) {   ans=max(ans,root->val+l[0]+r[0]);
        //update ans when condition true 

            return {root->val+l[0]+r[0],
                    min(root->val,l[1]),               //update new minimum
                    max(root->val,r[2])                //update new maximum 
                   };
        }
         else  return {0,INT_MIN,INT_MAX};              //will not satisfy any node above this tree    
    }

    int maxSumBST(TreeNode* root) {

        int ans=0;
        rec(root,ans);
        return ans;
    }
};

};