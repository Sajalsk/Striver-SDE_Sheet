#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
       int n=heights.size();

       vector<int>l(n);
       vector<int>r(n);

       stack<int>st;
        
       for (int i=0;i<n;i++) {
        while(!st.empty() && heights[i]<=heights[st.top()]) {
            st.pop();
        }

        l[i]=(st.empty())?0:st.top()+1;
        st.push(i);
       }

       while(!st.empty()) st.pop();

       for (int i=n-1;i>=0;i--) {
        while(!st.empty() && heights[i]>=heights[st.top()]) {
            st.pop();
        }

        l[i]=(st.empty())?n-1:st.top()-1;
        st.push(i);
       }

      int maxA = 0;
      for (int i = 0; i < n; i++) {
        maxA = max(maxA, heights[i] * (r[i] - l[i] + 1));
      }
        
      return maxA;
    }
};

