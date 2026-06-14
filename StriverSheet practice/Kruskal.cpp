#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> parent, size;
    int findUltParent(int node) {
        if(parent[node] == node) return node;
        return parent[node] = findUltParent(parent[node]);
    }
    void UnionBySize(int u, int v) {
        int a = findUltParent(u);
        int b = findUltParent(v);
        if(a == b) return;
        if(size[a] > size[b]) {
            parent[b] = a;
            size[a] += size[b];
        }
        else {
            parent[a] = b;
            size[b] += size[a];
        }
    }
    static bool cmp(vector<int>& v1, vector<int>& v2) {
        if(v1[2] < v2[2]) return true;
        else return false;
    }
    int spanningTree(int v, vector<vector<int>>& edges) {
        // code here
        
        // By Kruskal's Algorithm
        
        sort(edges.begin(), edges.end(), cmp);
        
        parent.resize(v+1);
        size.resize(v+1, 1);
        for(int i = 0; i <= v; i++) {
            parent[i] = i;
        }
        int minSum = 0;
        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            if(findUltParent(u) != findUltParent(v)) {
                minSum += wt;
                UnionBySize(u, v);
            }
        }
        return minSum;
        
    }
};
int main() {

}