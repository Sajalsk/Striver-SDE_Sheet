#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
         int maxArea = 0;
        int n=heights.size();

         for (int i = 0; i < n; i++) {
             int minHeight = INT_MAX;
             for (int j = i; j < n; j++) {
                minHeight = min(minHeight, heights[j]);
                maxArea = max(maxArea, minHeight * (j - i + 1));
           }
         }
          return maxArea;
    }
};