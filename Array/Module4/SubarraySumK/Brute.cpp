#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   
    int maxLen(vector<int>&A, int n) {
           
        int maxlen=0,sum=0;
        if(n==1 && A[0]==0) return 1;   // 15 -2 2 -8 1 7 -15 23
        
        for (int i=0;i<n;i++) {
            sum=A[i];                        // Right way of subarray
            for (int j=i+1;j<n;j++) {

                sum+=A[j];
                if(sum==0)  maxlen=max(maxlen,j-i+1);
            }
        }
         return maxlen;
    }
};