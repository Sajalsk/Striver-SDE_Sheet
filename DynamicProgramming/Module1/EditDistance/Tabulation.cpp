#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     
    int minDistance(string word1, string word2) {
        
        int n=word1.length();
        int m=word2.length();   
vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
    for(int i=0;i<=n;i++) dp[i][0] = i;
    for(int j=0;j<=m;j++) dp[0][j] = j;
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(word1[i-1]==word1[j-1])
                dp[i][j] = 0+dp[i-1][j-1];
            
    else dp[i][j] = 1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
        }
    }
    return dp[n][m];
 }
};