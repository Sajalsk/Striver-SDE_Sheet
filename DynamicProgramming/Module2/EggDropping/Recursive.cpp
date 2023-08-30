#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int Solve(int k, int n,int Min1){

        if(n == 0 || n == 1 || k==1) return n;       // N = 2, K = 10(floor)
       
        for(int i=1; i<=n; i++) {
            
            int res = 1 + max(Solve(k-1, i-1,Min1), Solve(k, n-i,Min1));  // egg broke , not broke
            Min1 = min(Min1, res);  
        }
          return Min1;
    }

    int superEggDrop(int k, int n) {  //  k == floors n = eggs

        int Min1 = INT_MAX;
        return Solve(k, n, Min1);
    }
};