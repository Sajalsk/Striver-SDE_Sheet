// String matching Algorithm
// Knuth Morris Prat algo for string matching

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {      //  haystack = "sadbutsad", needle = "sad"  return 0;
         
        if(haystack.length() < needle.length()) return -1;
        if(haystack == needle) return 0;
        
        for(int i=0 ; i < haystack.length()-needle.length()+1 ; i++) {
            
            if(haystack.substr(i,needle.length()) == needle) return i;
        }
         return -1;
    }
};