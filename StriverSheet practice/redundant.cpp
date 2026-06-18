#include <bits/stdc++.h>
using namespace std;
class DSU {
	public:
	vector<int> parent, size;
	DSU (int n) {
		parent.resize(n+1);
		size.resize(n+1, 1);
		for(int i = 0; i <=n; i++) {
			parent[i] = i;
		}
	}
	int findUltparent(int node) {
		if(parent[node] == node) return node;
		return parent[node] = findUltparent(parent[node]);
	}

	void unionBySize(int u, int v) {
		int ultparent_u = findUltparent(u);
		int ultparent_v = findUltparent(v);

		if(ultparent_u == ultparent_v) return;
		if(size[ultparent_u] > size[ultparent_v]) {
			parent[ultparent_v] = ultparent_u;
			size[ultparent_u] += size[ultparent_v];
		}
		else { // size of v is greater
			parent[ultparent_u] = ultparent_v;
			size[ultparent_v] += size[ultparent_u];

		}	

	}
};
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        int n = edges.size();
		// n is the number of nodes
		DSU ds(n);
		
		for(int i = 0; i < n; i++) {
			int u = edges[i][0];
			int v = edges[i][1];
			if(ds.findUltparent(u) == ds.findUltparent(v)) return {u, v};
			else ds.unionBySize(u, v);
		}

		return {};


    }
};
int main() {

}