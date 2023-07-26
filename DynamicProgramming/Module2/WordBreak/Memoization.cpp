#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, unordered_set<string> &set, vector<int> &dp, int start) {

        if(start == s.size())  return true;
        if(dp[start] != -1)  return dp[start];
        
        for(int i=start; i<s.size(); i++) {
            if(set.count(s.substr(start, i+1-start)) && wordBreak(s, set, dp, i+1)){
                dp[start] = true;
                return true;
            }
        }

        return dp[start] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {

        vector<int> dp(s.size(), -1);
        unordered_set<string> set(wordDict.begin(), wordDict.end());

        return wordBreak(s, set, dp, 0);
    }
};
