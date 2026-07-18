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
        int parent_u = findUltParent(u);
        int parent_v = findUltParent(v);

        if(parent_u == parent_v) return;

        if(size[parent_u] > size[parent_v]) {
            parent[parent_v] = parent_u;
            size[parent_u] += size[parent_v];
        }
        else {
            parent[parent_u] = parent_v;
            size[parent_v] += size[parent_u];
        }
    }
};
class Solution {
public:
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        
        DSU ds(n);

        vector<int> minCost(n, -1);

        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];

            ds.unionBySize(u, v);
        }

        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int weight = edges[i][2];

            int Parent = ds.findUltParent(u);
            if(minCost[Parent] == -1) minCost[Parent] = weight;
            else minCost[Parent] &= weight;
        }

        vector<int> ans(query.size());

        for(int i = 0; i < query.size(); i++) {
            int start = query[i][0];
            int end = query[i][1];

            if(ds.findUltParent(start) != ds.findUltParent(end)) ans[i] = -1;
            else {
                int Parent = ds.findUltParent(start);

                ans[i] = minCost[Parent];
            }
        }

        return ans;

    }
};
int main() {

}