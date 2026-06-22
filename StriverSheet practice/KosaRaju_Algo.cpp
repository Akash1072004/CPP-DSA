#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<bool> vis;
    void dfs(vector<int> graph[], int node, stack<int>& st) {
        vis[node] = true;
        
        for(auto it : graph[node]) {
            if(!vis[it]) {
                dfs(graph, it, st);
            }
        }
        
        st.push(node);
        
    }
    void dfs2(vector<int> graphTranspose[], int node) {
        vis[node] = true;
        
        for(auto it : graphTranspose[node]) {
            if(!vis[it]) {
                dfs2(graphTranspose, it);
            }
        }
        
    }
    int kosaraju(int V, vector<vector<int>> &edges) {
        // code here
        
        vector<int> graph[V];
        
        for(int i = 0; i < edges.size(); i++) {
            graph[edges[i][0]].push_back(edges[i][1]);
        }
        
        vis.resize(V, false);
        
        stack<int> st;
        
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                dfs(graph, i, st);
            }
        }
        
        vector<int> graphTranspose[V];
        
        for(int i = 0; i < edges.size(); i++) {
            graphTranspose[edges[i][1]].push_back(edges[i][0]);
        }
        
        for(int i = 0; i < V; i++) vis[i] = false;
        int count = 0;
        
        while(!st.empty()) {
            int node = st.top();
            st.pop();
            if(!vis[node]) {
                count++;
                dfs2(graphTranspose, node);
            }
        }
        
        return count;
        
    }
};
int main() {

}