#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        
        if(s.length()==0) return 0;

        vector<int>dict(256,-1);    //abcabcbb

        int maxlen=INT_MIN;
        int start=-1;
        
       for (int i=0;i<s.length();i++) {

           if(dict[s[i]]>start)    start=dict[s[i]];      // inserting the char index at start.
       
           dict[s[i]]=i;
           maxlen=max(maxlen,i-start);
       }
        return maxlen;
    }
};