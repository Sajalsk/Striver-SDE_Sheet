#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int flag=1;
        int n = matrix.size();
        int m = matrix[0].size();
        
        for (int i=0;i<n;i++) {
            if(matrix[i][0]==0) flag=0;      // chk in first colmn
            for (int j=1;j<m;j++) {
                if(matrix[i][j]==0) {
                    
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        for (int i=n-1;i>=0;i--) {
            for (int j=m-1;j>=1;j--) {            // 0th colmn already visited
            if(matrix[i][0]==0 || matrix[0][j]==0) {
                matrix[i][j]=0;
            }
        }
        
        if(flag==0)   matrix[i][0]=0;    // 1st colmn 
    }
        
    }
};