class Solution {
    public:
        int help(int W, int wt[], int val[], int n) {
            if (n == 0 || W == 0) return 0; // Base case
    
            if (wt[n - 1] > W) 
                return help(W, wt, val, n - 1); // Not taking the item if it exceeds capacity
    
            return max(
                val[n - 1] + help(W - wt[n - 1], wt, val, n - 1), // Take the item
                help(W, wt, val, n - 1) // Skip the item
            );
        }
        
        int knapSack(int W, int wt[], int val[], int n) {
            return help(W, wt, val, n);
        }
    };