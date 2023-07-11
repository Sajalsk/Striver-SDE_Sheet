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

    int solve(TreeNode *root, int &maxi) {
        if(!root) return 0;

        int lsum = solve(root->left, maxi);
        int rsum = solve(root->right, maxi);

        if(lsum < 0) lsum = 0;
        if(rsum < 0) rsum = 0;
        
        maxi = max(maxi, lsum + rsum + root->val);  // Whole sum choice path of that maximum particular Node.

        return root->val + max(lsum, rsum);
    }

    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        solve(root, maxi);
        return maxi;
    }
};
};                     


};  