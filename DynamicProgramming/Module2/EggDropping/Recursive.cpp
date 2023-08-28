#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int helper(int k, int n,int min1){

        if(n == 0 || n == 1 || k==1) return n;
       
        for(int i=1; i<=n; i++) {
            
            int res = 1 + max(helper(k-1, i-1,min1), helper(k, n-i,min1));
            min1 = min(min1, res);  
        }
          return min1;
    }

    int superEggDrop(int k, int n) {  //  k == floors n = eggs

        int min1 = INT_MAX;
        return helper(k, n, min1);
    }
};