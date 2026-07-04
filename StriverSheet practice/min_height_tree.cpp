#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxDepth, up, ans; // take depth from leaf node
    void dfs(vector<int> graph[], int node, int parent) {
        for(auto it : graph[node]) {
            if(it == parent) continue;
            dfs(graph, it, node);
            maxDepth[node] = max(maxDepth[node], maxDepth[it]+1); // take depth from child
        }
    }
    void dfs2(vector<int> graph[], int node, int parent) {
        int maxi1 = -1, maxi2 = -1;
        for(auto it : graph[node]) {
            if(it == parent) continue;
            if(maxi1 < maxDepth[it]+1) {
                maxi2 = maxi1;
                maxi1 = maxDepth[it]+1;
            }
            else if(maxi2 < maxDepth[it]+1) {
                maxi2 = maxDepth[it]+1;
            }
        }

        ans[node] = max(up[node], maxDepth[node]);
        for(auto it : graph[node]) {
            if(it == parent) continue;
            int temp = maxi1;
            if(maxDepth[it]+1 == temp) {
                temp = maxi2;
            }
            up[it] = max(temp+1, up[node]+1);
            dfs2(graph, it, node);
        }
    }
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {

        vector<int> graph[n];

        for(int i = 0; i < n-1; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        maxDepth.resize(n, 0);
        ans.resize(n, 0);
        up.resize(n, 0);
        dfs(graph, 0, -1);
        dfs2(graph, 0, -1);

        vector<int> finalAns;
        int mini = 1e9;
        for(int i = 0; i < n; i++) {
            mini = min(mini, ans[i]);
        }

        for(int i = 0; i < n; i++) {
            if(ans[i] == mini) finalAns.push_back(i);
        }
        
        return finalAns;

    }
};
int main() {

}