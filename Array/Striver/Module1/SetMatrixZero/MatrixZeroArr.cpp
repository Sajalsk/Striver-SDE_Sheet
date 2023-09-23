#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<int>R(n,-1);
        vector<int>C(m,-1);
        
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                if(matrix[i][j]==0) {
                    R[i]=0;
                    C[j]=0;
                }
            }
        }
        
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                if(R[i]==0 || C[j]==0) {
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};