#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<int>> generate(int numRows) {
      
        vector<vector<int>>res(numRows);
        
        for (int i=0;i<numRows;i++) {

            res[i].resize(i+1);
            res[i][0]=res[i][i]=1;                   // keeping the first and last index as always 1
            
            for (int j=1;j<i;j++) {                  // <i !important
                res[i][j]=res[i-1][j-1]+res[i-1][j];
            }
        }
         return res;   
    }
};

