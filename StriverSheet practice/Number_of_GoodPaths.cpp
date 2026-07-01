#include <bits/stdc++.h>
using namespace std;

class DSU {
    public: 
    vector<int> parent, size;

    DSU(int n) {
        parent.resize(n);
        size.resize(n, 1);

        for(int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int findUltParent(int node) {
        if(parent[node] == node) return node;
        return parent[node] = findUltParent(parent[node]);
    }

    void unionBySize(int u, int v) {
        int ultParent_u = findUltParent(u);
        int ultParent_v = findUltParent(v);

        if(ultParent_u == ultParent_v) return;

        if(size[ultParent_u] > size[ultParent_v]) {
            parent[ultParent_v] = ultParent_u;
            size[ultParent_u] += size[ultParent_v];
        }
        else {
            parent[ultParent_u] = ultParent_v;
            size[ultParent_v] += size[ultParent_u];
        }
    }
};
class Solution {
public:
    int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
        
        int m = edges.size();
        int n = m+1;

        vector<int> graph[n];
        for(int i = 0; i < m; i++) {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }

        map<int, vector<int>> sameValNodes;

        for(int i = 0; i < n; i++) {
            sameValNodes[vals[i]].push_back(i);
        }

        vector<bool> vis(n, false);

        int goodPaths = n; // all single nodes have also the path exists

        DSU ds(n);

        for(auto &it : sameValNodes) {
            vector<int> nodes = it.second;

            for(auto &node : nodes) {
                for(auto &u : graph[node]) {
                    if(vis[u]) {
                        ds.unionBySize(node, u);
                    }
                }

                vis[node] = true;
            }

            vector<int> nodesParent;
            for(auto &node : nodes) {
                int parent = ds.findUltParent(node);
                nodesParent.push_back(parent);
            }

            // how many nodes have same parent

            sort(nodesParent.begin(), nodesParent.end());

            int count = 1;

            for(int i = 1; i < nodesParent.size(); i++) {
                if(nodesParent[i] == nodesParent[i-1]) {
                    count++;
                } else {
                    goodPaths += count* (count - 1) / 2;
                    count = 1;
                }
            }

            goodPaths += count* (count - 1) / 2;
        }

        return goodPaths;

    }
};
int main() {

}