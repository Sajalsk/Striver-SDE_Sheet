#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[101][10005];
    int solve(int k, int n) {
        
        if (n == 0 or n == 1 || k==1) return n;
       
        if (dp[k][n] != -1) return dp[k][n];
        
        int answer = INT_MAX;
        int start = 1;
        int end = n;

        while (start <= end) {

            int middle = (start + end) / 2;

            int down = solve(k - 1, middle - 1);   // Egg broked (just down)
            int up = solve(k, n - middle);             // Not Broked  (middle from where not broked)
            int temp = 1 + max(down, up);

            if (down < up)  start = middle + 1;
            else  end = middle - 1;
           
            answer = min(answer, temp);
        }

        return dp[k][n] = answer;
    }

    int superEggDrop(int k, int n) {
        return solve(k, n);
    }
};
