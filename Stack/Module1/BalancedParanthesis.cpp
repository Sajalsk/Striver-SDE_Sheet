#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            
            if(s.length()%2!=0) return false;
            stack<char>st;
            
            for(int i=0;i<s.length();i++) {
                
                if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
                    st.push(s[i]);   
                } 
                   else if (s[i]==')') {
                     if(st.empty() || st.top()!='(' ) return false;
                     else st.pop();
                } 
                  else if (s[i]=='}') {
                     if(st.empty() || st.top()!='{') return false;
                     else st.pop();
                } 
                  else if (s[i]==']') {
                     if(st.empty() || st.top()!='[') return false;
                     else st.pop();
                }
            }
            
            if(!st.empty()) return false;
            return true;
        }
    };

// "{[]}"


