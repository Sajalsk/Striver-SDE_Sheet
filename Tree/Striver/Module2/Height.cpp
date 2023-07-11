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

int main() {
    
     int maxDepth(TreeNode* root) {
        
            if(root==NULL) return 0;
            int cl=maxDepth(root->left);
            int cr=maxDepth(root->right);
            
            int ans=1+max(cl,cr);      // 1+ for the root itself
            
            return ans;
    }

}

};
