// String matching Algorithm

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        
       if(haystack.size() < needle.size()) return -1;
        int h = 0, n = 0;
        while(h < haystack.size() && n < needle.size()) {
            if(haystack[h] == needle[n]) {
                h++;
                n++;
            }
            else {
                // h must increase if else it will TLE
                // go back the index before n elements & increase 1 index
                h  = h - n +1;
                //reset index needle
                n = 0;
            }
        }
        return n == needle.size() ? h-n : -1;
    }
};