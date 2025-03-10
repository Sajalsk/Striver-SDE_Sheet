#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    string reverseWords(string s) {

        stack<string> st;
        string str = "" ;
        string ans = "";

        for(int i=0; i<s.length(); i++) {
            if(s[i]== ' ') {
                if(!str.empty())  st.push(str);      // no prior space before a word
                str = "";                            // making the str empty
            } else str += s[i];   
        }

        st.push(str);    // for last word
      

        while(!st.empty()) {
            if(!ans.empty())  ans +=' ';             // adding space after first word no at begining
                
            ans += st.top();
            st.pop();
        }
         return ans;
    }
};