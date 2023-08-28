#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int repeatedStringMatch(string a, string b) {

        int cnt = 1;
        string temp = a;
        
        while(a.length() < b.length()) {             //  a = "abcd", b = "cdabcdab"
            a += temp;
            cnt++;
        }                                           // a= abcdabcd  
        
        if(a.find(b) != -1) return cnt;            // finding b
            a += temp;                            // a = abcdabcdabcd 
            cnt++;
        
        if(a.find(b) != -1) return cnt;          // finding b....found
        return -1;
    }
};