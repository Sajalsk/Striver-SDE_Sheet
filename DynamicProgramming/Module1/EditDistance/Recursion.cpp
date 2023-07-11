#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int help(int i,int j,string word1,string word2) {
        
        if(i<0) {
            return j+1;
        }
        
        else if(j<0) {
            return i+1;
        }
        
        if(word1[i]==word2[j]) {
             return help(i-1,j-1,word1,word2);
        }
       
        return 1+min ( help(i-1,j,word1,word2),
        min( help(i,j-1,word1,word2),help(i-1,j-1,word1,word2)));
    }
    
    int minDistance(string word1, string word2) {
        
        int n=word1.length();
        int m=word2.length();
        
       return  help(n-1,m-1,word1,word2);
    }
};