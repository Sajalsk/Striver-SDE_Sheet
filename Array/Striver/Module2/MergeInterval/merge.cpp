#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
    if (intervals.empty()) return {};
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> res{intervals[0]};  // res={i,j};

    for (int i = 1; i < intervals.size(); ++i) {
        if (res.back()[1] < intervals[i][0]) { //doesn't overlap, push current interval
            res.push_back(intervals[i]);
        } else {
            res.back()[1] = max(res.back()[1], intervals[i][1]); //overlap, update end
        }
    }   
    return res;    
    }
};