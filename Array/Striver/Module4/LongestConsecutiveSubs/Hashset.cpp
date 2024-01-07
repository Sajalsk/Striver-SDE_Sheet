#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0) return 0;
        int len =1,maxlen=1;
        
        set<int>s(nums.begin(),nums.end());
        
        for( auto it: s) {
            
            if(s.find(it+1)!=s.end()) len++;
            else {
                maxlen=max(maxlen,len);
                len=1;
            }
        }        
         return max(maxlen,len);  
    }
};