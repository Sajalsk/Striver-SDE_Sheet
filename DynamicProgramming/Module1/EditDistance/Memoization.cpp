#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
int help(int i,int j,string word1,string word2,vector<vector<int>>&dp) {
        
        if(i<0) return j+1;
        if(j<0) return i+1;
        
    if(dp[i][j]!=-1) return dp[i][j];
        
        if(word1[i]==word2[j]) return dp[i][j]= help(i-1,j-1,word1,word2,dp);
    
return dp[i][j]= 1+min(help(i-1,j,word1,word2,dp),min(help(i,j-1,word1,word2,dp),help(i-1,j-1,word1,word2,dp)));
    }
    
    int minDistance(string word1, string word2) {
        
        int n=word1.length()-1;
        int m=word2.length()-1;
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
       return  help(n,m,word1,word2,dp);
    }
};