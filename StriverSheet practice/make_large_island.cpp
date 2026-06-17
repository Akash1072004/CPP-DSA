#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    class DSU {
        public:
        vector<int> parent, size;
        DSU(int v) {
            parent.resize(v+1);
            size.resize(v+1, 1);
            for(int i = 0; i < v; i++) {
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
    int largestIsland(vector<vector<int>>& grid) {
        
        int n = grid.size();
        DSU ds(n*n);
        // node number from (n*rows + coln)
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) {
                    if(i+1 < n && grid[i+1][j] == 1) {
                        int u = (n*i)+j;
                        int v = (n*(i+1))+j;
                        if(ds.findUltParent(u) != ds.findUltParent(v)) {
                            ds.unionBySize(u, v);
                        }
                    }
                    if(i-1 >= 0 && grid[i-1][j] == 1) {
                        int u = (n*i)+j;
                        int v = (n*(i-1))+j;
                        if(ds.findUltParent(u) != ds.findUltParent(v)) {
                            ds.unionBySize(u, v);
                        }
                    }
                    if(j-1 >= 0 && grid[i][j-1] == 1) {
                        int u = (n*i)+j;
                        int v = (n*i)+(j-1);
                        if(ds.findUltParent(u) != ds.findUltParent(v)) {
                            ds.unionBySize(u, v);
                        }
                    }
                    if(j+1 < n && grid[i][j+1] == 1) {
                        int u = (n*i)+j;
                        int v = (n*i)+(j+1);
                        if(ds.findUltParent(u) != ds.findUltParent(v)) {
                            ds.unionBySize(u, v);
                        }
                    }
                }
            }
        }

        int maxArea = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 0) {
                    unordered_set<int> st;
                    if(i+1 < n && grid[i+1][j] == 1) {
                        int u = (n*(i+1))+j;
                        st.insert(ds.findUltParent(u));
                    }
                    if(i-1 >= 0 && grid[i-1][j] == 1) {
                        int u = (n*(i-1))+j;
                        st.insert(ds.findUltParent(u));
                    }
                    if(j-1 >= 0 && grid[i][j-1] == 1) {
                        int u = (n*i)+(j-1);
                        st.insert(ds.findUltParent(u));
                    }
                    if(j+1 < n && grid[i][j+1] == 1) {
                        int u = (n*i)+(j+1);
                        st.insert(ds.findUltParent(u));
                    }
                    int totalArea = 0;
                    for(auto it : st) {
                        totalArea += ds.size[it];
                    }
                    maxArea = max(maxArea, totalArea+1);
                }
            }
        }

        return ((maxArea != 0) ? maxArea : (n*n));


    }
};
int main() {

}