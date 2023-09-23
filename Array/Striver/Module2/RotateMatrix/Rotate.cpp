#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int a=0,b=0;
        int n=matrix.size();   // 3
        int m=matrix[0].size();  // 3
        
    vector<vector<int>> reverse(m, vector<int>(n,0));
  
        for (int j=0;j<m;j++) {
            for (int i=n-1;i>=0;i--) {
                reverse[a][b]=matrix[i][j];
                b++;
            }
            b=0;
            a++;
        }
        
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                matrix[i][j]=reverse[i][j];
            }
        }
    }
};