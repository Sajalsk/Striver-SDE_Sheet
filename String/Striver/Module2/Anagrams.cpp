#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length()) return false;
        
        map<int,int>mpp1,mpp2;
        
        for(int i=0;i<s.length();i++)   mpp1[s[i]]++;
        for(int i=0;i<t.length();i++)   mpp2[t[i]]++;
        
              
        for(auto it:s) {
            if(mpp1[it]!=mpp2[it]) return false;         // traverse finding
        }
        
        return true;
    }
};