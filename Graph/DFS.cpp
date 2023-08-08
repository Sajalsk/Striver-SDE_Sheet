#include <bits/stdc++.h>
using namespace std;

class Solution {
void dfs(int start,vector<int>vis,vector<int>adj[],vector<int>&lis) {
    
        lis.push_back(start);
        vis[start]=1;     // just visited
        
        for(auto it:adj[start])  if(!vis[it])  dfs(it,vis,adj,lis);  
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {   // V = no. of vertices;
     
        vector<int>vis(V,0);
        int start=0;
        vector<int>lis;

        dfs(start,vis,adj,lis);
        return lis;
    }
};
 