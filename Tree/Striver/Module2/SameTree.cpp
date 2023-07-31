#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{

public:
    T data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

   class Solution {
public:
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        
        if(p->val!=q->val) return false;
        
    return (isSameTree(p->left,q->left)&&isSameTree(p->right,q->right));  
        
    }
};
};