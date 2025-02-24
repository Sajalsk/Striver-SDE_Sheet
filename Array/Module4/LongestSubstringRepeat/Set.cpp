#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        
        int maxlen=1;
        
        if(s.length()==0) return 0;

        for (int i=0;i<s.length();i++) {
              unordered_set <char>st;         // ready to rewritten & unique bcz previous index is not of use
            for (int j=i;j<s.length();j++) {
                if(st.find(s[j])!=st.end()) {     // if not goes till end
                    maxlen= max(maxlen,j-i);
                    break;            
                }
                 st.insert(s[j]);                
            }
        }
         return maxlen; 
    }
};