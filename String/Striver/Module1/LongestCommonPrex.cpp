#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    string longestCommonPrefix(vector<string>& strs) {
        
        string res="";
       
        for (int i=0;i<strs[0].length();i++) {      // ["flower","flow","flight"]  ans = fl 
            char ch = strs[0][i];                   // traversing in the word only
            bool match = true;
            for (int j=1;j<strs.size();j++) {                 // traversing in the series of words
                if(ch!=strs[j][i] || strs[j].size() < i) {     // j-i   jth word ith colmn
                    match = false;
                    break;
                }  
            }
            
            if(match==false)  break;
            else   res+=ch;  
        }
         return res;
    }
};