#include <bits/stdc++.h>
using namespace  std;

class Solution {
public:

int help(int i, int j, int n, int m, vector<vector<int>>& grid) {
        
       if(i >= n || j >= m)         return 1e9;
       if(i == n - 1 && j == m - 1) return grid[i][j];
        
       int right=grid[i][j];  // values at present !important
       int down=grid[i][j];  
    
       right+= help(i + 1, j, n, m, grid);
       down += help(i, j + 1, n, m, grid);
        
       return  min(right, down);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
    
        int ans = help(0, 0, n, m, grid);
        return ans;
    }
};