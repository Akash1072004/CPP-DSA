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
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        
        vector<int> graph[n];

        DSU ds(n);

        for(int i = 0; i < n-1; i++) {
            if(abs(nums[i]-nums[i+1]) <= maxDiff) {
                ds.unionBySize(i, i+1);
            }
        }
        
        vector<bool> isPath(queries.size(), false);

        for(int i = 0; i < queries.size(); i++) {
            int u = queries[i][0];
            int v = queries[i][1];

            if(ds.findUltParent(u) == ds.findUltParent(v)) {
                isPath[i] = true;
            }
        }

        return isPath;

    }
};
int main() {

}