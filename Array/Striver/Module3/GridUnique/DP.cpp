#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int steps(int i,int j,int m,int n, vector<vector<int>>&dp) {
        
        if(i==(m-1) && j==(n-1) )  return 1;
        if(i>m || j>n) return 0;

        if(dp[i][j]!=-1) return dp[i][j];
    else return dp[i][j]= steps(i+1,j,m,n,dp)+steps(i,j+1,m,n,dp);
        
    }
    
    int uniquePaths(int m, int n) {
        
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int ans = steps(0,0,m,n,dp);
        if(m==1 && n==1) {
            return ans;
        }
        
        return dp[0][0];
    }
};