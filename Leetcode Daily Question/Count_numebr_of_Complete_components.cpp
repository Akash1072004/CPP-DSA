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
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        
        DSU ds(n);

        vector<int> degree(n, 0);

        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            ds.unionBySize(u, v);
            degree[u]++;
            degree[v]++;
        }

        vector<int> completeComponents(n, 0);

        for(int i = 0; i < n; i++) {
            int Parent = ds.findUltParent(i);

            int parentSize = ds.size[Parent];
            if(degree[i] == parentSize-1) {
                completeComponents[Parent]++;
            }
        }

        int count = 0;

        for(int i = 0; i < n; i++) {
            if(completeComponents[i] == ds.size[i]) count++;
        }

        return count;

    }
};
int main() {

}