class Solution {
    public:
        int ans = 0;
        
        int Solve(TreeNode* root) {
            if (!root) return 0;
            
            int lh = Solve(root->left);
            int rh = Solve(root->right);
            
            ans = max(ans, lh + rh); 
            
            return 1 + max(lh, rh);  
        }
    
        int diameterOfBinaryTree(TreeNode* root) {
            Solve(root);
            return ans;
        }
    };
    