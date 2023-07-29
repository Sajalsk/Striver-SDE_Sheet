#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int help(int i,int j,string text1,string text2) {
        
        if(i<0 || j<0 )  return 0;
           
        if(text1[i]==text2[j]) return 1+help( i-1,j-1,text1,text2);
        
       return max(help(i-1,j,text1,text2),help(i,j-1,text1,text2));
                        
    }
    
    int longestCommonSubsequence(string text1, string text2) {
       
        int i=text1.length()-1;
        int j=text2.length()-1;
        
        return help(i,j,text1,text2);
        
        
    }
};