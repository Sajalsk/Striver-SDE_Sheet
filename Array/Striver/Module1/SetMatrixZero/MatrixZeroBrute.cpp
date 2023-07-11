#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
    
   for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            if (matrix[i][j]==0) { 
            for (int k=0;k<n;k++) {         // converting coln
                if (matrix[i][k]!=0) {                // keeping row const
                    matrix[i][k]=-1011;
                }
            }  
        break;
           }    
        }
    }
    
     for (int j=0;j<n;j++) {
        for (int i=0;i<m;i++) {
            if (matrix[i][j]==0) { 
            for (int k=0;k<m;k++) {             // converting row
                if (matrix[k][j]!=0) {
                    matrix[k][j]=-1011;
                }
            }  
        break;
           }     
        }  
    }
    
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            if (matrix[i][j]==-1011) {
               matrix[i][j]=0;
            }
        }
    }   
}
    
};
    
