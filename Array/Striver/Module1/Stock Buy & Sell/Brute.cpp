#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int maxProfit(vector<int>prices) {
          
        int diff=0,max1=0,n=prices.size();

          for(int i=0;i<n;i++) {
             for(int j=i+1;j<n;j++) {

                diff=prices[j]-prices[i];
                if(diff<0) diff=0;              // kadanes algorithm

                max1=max(max1,diff);
            }
          }
           return max1;
    }
 };