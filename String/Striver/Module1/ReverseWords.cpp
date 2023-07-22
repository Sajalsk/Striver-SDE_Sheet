#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {

        stack<string> st;
        string str = "";

        for(int i=0; i<s.size(); i++) {
            if(s[i]== ' ') {
                if(!str.empty())  st.push(str);
                str = "";     // making the str empty
            } else str += s[i];   
        }

        st.push(str);    // for last
        string ans = "";

        while(!st.empty()) {
            if(!ans.empty())  ans +=' ';   // adding space after first word
                
            ans += st.top();
            st.pop();
        }
        
        return ans;
    }
};