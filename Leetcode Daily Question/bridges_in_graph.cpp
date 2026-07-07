#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> vis;
    void dfs(vector<int> graph[], int node, int parent, vector<int>& tin, vector<int>& low, int timer, vector<vector<int>>& bridges) {
        vis[node] = true;

        tin[node] = timer;
        low[node] = timer;

        for(auto it : graph[node]) {
            if(it == parent) continue;
            if(!vis[it]) {
                dfs(graph, it, node, tin, low, timer+1, bridges);
                low[node] = min(low[node], low[it]);
                if(low[it] > tin[node]) {
                    bridges.push_back({it, node});
                }
            }
            else {
                low[node] = min(low[node], low[it]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
        vector<int> graph[n];

        for(int i = 0; i < connections.size(); i++) {
            graph[connections[i][0]].push_back(connections[i][1]);
            graph[connections[i][1]].push_back(connections[i][0]);
        }

        vector<vector<int>> bridges;
        vis.resize(n, false);

        vector<int> tin(n, -1);
        vector<int> low(n, -1);

        dfs(graph, 0, -1, tin, low, 0, bridges);

        return bridges;

    }
};
int main() {

}