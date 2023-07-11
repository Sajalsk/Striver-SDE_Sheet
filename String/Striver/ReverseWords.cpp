#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stack<string> stak;
        string str = "";
        for(int i=0; i<s.size(); i++){
            if(s[i]== ' '){
                if(!str.empty())
                    stak.push(str);
                str = "";
            }
            else{
                str += s[i];
            }
        }
        stak.push(str);
        string ans = "";
        while(!stak.empty()){
            if(!ans.empty())
                ans +=' ';
            ans += stak.top();
            stak.pop();
        }
        return ans;
    }
};