#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int repeatedStringMatch(string a, string b) {

        int cnt = 1;
        string temp = a;
        while(a.length() < b.length()) {   //  a = "abcd", b = "cdabcdab"
            a += temp;
            cnt++;
        }
        
        if(a.find(b) != -1) return cnt;
        a += temp;
        cnt++;
        if(a.find(b) != -1) return cnt;
        return -1;
    }
};