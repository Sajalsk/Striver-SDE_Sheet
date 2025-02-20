#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            
            int m=matrix.size();
            int n=matrix[0].size();
            
            vector<vector<int>>res(m,vector<int>(n,0));
            int a=0,b=0;
           
            
            for(int j=0;j<n;j++) {
                for(int i=m-1;i>=0;i--) {
                    res[a][b]=matrix[i][j];
                    b++;
                }
                 b=0;
                a++;
            }
             for(int i=0;i<n;i++) {
                 for(int j=0;j<m;j++) {
                     matrix[i][j]=res[i][j];
                 }
             }
        }
    };