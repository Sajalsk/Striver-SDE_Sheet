#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

void dfs(int start,vector<int>vis,vector<int>adj[],vector<int>&res) {
    
        res.push_back(start);
        vis[start]=1;     // just visited
        
        for(auto it:adj[start])  if(!vis[it])  dfs(it,vis,adj,res);  
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {   // V = no. of vertices;
     
        vector<int>vis(V,0);
        vector<int>res;

        dfs(0,vis,adj,res);
        return res;
    }
};
 