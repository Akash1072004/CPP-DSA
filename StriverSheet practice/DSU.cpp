#include <bits/stdc++.h>
using namespace std;

class DSU {
    vector<int> rank, parent, size;
    public: 
    DSU(int n) {
        rank.resize(n+1, 0);
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

    void UnionByRank(int u, int v) {
        int ultParent_u = findUltParent(u);
        int ultParent_v = findUltParent(v);

        if(ultParent_u == ultParent_v) return;
        if(rank[ultParent_u] < rank[ultParent_v]) {
            parent[ultParent_u] = ultParent_v;
        }
        else if(rank[ultParent_u] > rank[ultParent_v]) {
            parent[ultParent_v] = ultParent_u;
        }
        else {
            parent[ultParent_u] = ultParent_v;
            rank[ultParent_v]++;
        }
    }
    void UnionBySize(int u, int v) {
        int ultParent_u = findUltParent(u);
        int ultParent_v = findUltParent(v);

        if(ultParent_u == ultParent_v) return;
        if(size[ultParent_u] < size[ultParent_v]) {
            parent[ultParent_u] = ultParent_v;
            size[ultParent_v] += size[ultParent_u];
        }
        else {
            parent[ultParent_v] = ultParent_u;
            size[ultParent_u] += size[ultParent_v];
        }
    }
};
int main() {
    DSU ds(7);
    ds.UnionBySize(1, 2);
    ds.UnionBySize(2, 3);
    ds.UnionBySize(4, 5);
    ds.UnionBySize(6, 7);
    ds.UnionBySize(5, 6);
    // check if 3 and 7 belong to same group or not 
    if(ds.findUltParent(3) == ds.findUltParent(7)) {
        cout << "Same" << endl;
    }
    else cout << "Not Same" << endl;
    ds.UnionBySize(3, 7);

    if(ds.findUltParent(3) == ds.findUltParent(7)) {
        cout << "Same" << endl;
    }
    else cout << "Not Same" << endl;

    return 0;
}