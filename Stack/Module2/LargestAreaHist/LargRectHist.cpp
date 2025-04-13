#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {  //  [2,1,5,6,2,3] 10
        
       int n=heights.size();

       vector<int>l(n);
       vector<int>r(n);

       stack<int>st;
        
        for (int i=0;i<n;i++) {
        while(!st.empty() && heights[i]<=heights[st.top()]) {            // next greater elem
            st.pop();
        }

        r[i]=(st.empty())?0:st.top()+1;
        st.push(i);
       }

       while(!st.empty()) st.pop(); 

       for (int i=n-1;i>=0;i--) {     
        while(!st.empty() && heights[i]<=heights[st.top()]) {             // // next smaller elem
            st.pop();
        }

        l[i]=(st.empty())?n-1:st.top()-1;
        st.push(i);
       }

      int max_val = 0;
      for (int i = 0; i < n; i++) {
        max_val= max(max_val, heights[i] * (l[i] - r[i] + 1));
      }
        
      return max_val;
    }
};
