#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0) return 0;
        int count =1,max1=1;
        
        set<int>s(nums.begin(),nums.end());
        
        for( auto it: s){
            if(s.find(it+1)!=s.end()) count++;
            else {
                max1=max(max1,count);
                count=1;
            }
        }        
        return max(max1,count);  
    }
};