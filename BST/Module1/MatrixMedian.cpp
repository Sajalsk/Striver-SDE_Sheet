#include <bits/stdc++.h>
using namespace std;

int findMedian(vector<vector<int> > &matrix) {

    int r=matrix.size();
    int c=matrix[0].size();

    int k = (r * c + 1) / 2;                   // mid

        int a = INT_MAX;
        int b = INT_MIN;

        for(int i = 0; i < r; i++) {
            a = min(a, matrix[i][0]);         // 0th colmn min
            b = max(b, matrix[i][c-1]);       // last colmn min
        }

        while(a < b) {

            int m = (a + b) / 2;
            int count = 0;

            for(int i = 0; i < r; i++) {
                count = count + upper_bound(matrix[i].begin(), matrix[i].end(), m) - matrix[i].begin();
            }
             if(count < k) a = m + 1;
             else b = m;
        }
         return a;
}