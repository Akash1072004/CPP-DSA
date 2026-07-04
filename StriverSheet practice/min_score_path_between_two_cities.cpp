#include <bits/stdc++.h>
using namespace std;

class DSU {
    public:
    vector<int> parent, size;
    DSU(int n) {
        parent.resize(n+1);
        size.resize(n+1, 1);
        for(int i = 0; i <= n; i++) {
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
    int minScore(int n, vector<vector<int>>& roads) {
        
        DSU ds(n);
        for(int i = 0; i < roads.size(); i++) {
            int u = roads[i][0];
            int v = roads[i][1];
            int distance = roads[i][2];
            if(ds.findUltParent(u) != ds.findUltParent(v)) {
                ds.unionBySize(u, v);
            }
        }

        int ans = 1e9;
        for(int i = 0; i < roads.size(); i++) {
            int u = roads[i][0];
            int v = roads[i][1];
            int distance = roads[i][2];
            if(ds.findUltParent(1) == ds.findUltParent(u)) {
                ans = min(ans, distance);
            }
        }
        return ans;

    }
};
int main() {

}