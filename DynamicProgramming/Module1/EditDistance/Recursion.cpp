#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int Solve(int i,int j,string word1,string word2) {
        
        if(i<0) return j+1;
        if(j<0) return i+1;
        
        if(word1[i]==word2[j]) return Solve(i-1,j-1,word1,word2);
//                             Deletion                          Insertion                    Replace                         
      return 1+ min( Solve(i-1,j,word1,word2), min( Solve(i,j-1,word1,word2),Solve(i-1,j-1,word1,word2)));
    }
    
    int minDistance(string word1, string word2) {
        
        int n=word1.length()-1;
        int m=word2.length()-1;
        
       return  Solve(n,m,word1,word2);
    }
};