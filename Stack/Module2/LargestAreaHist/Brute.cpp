#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:

    int largestRectangleArea(vector<int>& heights) {
        
        int max_area = 0;
        int n=heights.size();

         for (int i = 0; i < n; i++) {        //  [2,1,5,6,2,3]       // 10
             int min_height = INT_MAX;

             for (int j = i; j < n; j++) {
                min_height = min(min_height, heights[j]);
                max_area   = max(max_area, min_height * (j - i + 1));  // no. of time elem remains grtr than it.
           }
         }
           return max_area;
    }
};