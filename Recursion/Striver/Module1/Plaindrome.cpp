#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool issafe(int st,int e,string s){   //start,end 

        while(st<=e) {
            if(s[st++]!=s[e--]) return false;   
        }
         return true;
    }
    
    void help(vector<string>&ds,vector<vector<string>>&ans,string s,int index) {
        
        if(index==s.size()) {
            ans.push_back(ds);
            return;
        }
        
        for(int i=index;i<s.size();i++) {
            
        if(issafe(index,i,s)) {                        // Working in case of returning true;
            
           ds.push_back(s.substr(index,i-index+1));    // Palindromic substring to be inserted
           help(ds,ans,s,i+1);                         // Remaining Substring to be check

           ds.pop_back();                              // backtrack
        }
     }
    }

    vector<vector<string>> partition(string s) {
        
        vector<vector<string>>ans;
        vector<string>ds;
        
        help(ds,ans,s,0);
        return ans;
    }
    
};

