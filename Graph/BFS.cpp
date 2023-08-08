#include <bits/stdc++.h>
using namespace std;

class Solution {

       vector<int> bfsOfGraph(int V, vector<int> adj[]) {   // V = no. of vertices;

        vector<int>visited(V,0);
        vector<int>res;

        queue<int>q({0});

        visited[0]=1;     // just visited

        while(!q.empty()) {

            auto node = q.front();
            q.pop();

            res.push_back(node);

            for(auto it:adj[node]) {
                if(!visited[it]) {
                    q.push(it);
                    visited[it]=1;
                }
            }
        }
         return res;
    }
};
