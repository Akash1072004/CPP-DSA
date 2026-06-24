#include <bits/stdc++.h>
using namespace std;

class DSU {
	public:
	vector<int> parent, size;
	DSU (int n) {
		parent.resize(n+1);
		size.resize(n+1, 1);
		for(int i = 0; i <= n; i++) {
			parent[i] = i;
		}
	}
	int findUltparent(int node) {
		if(parent[node] == node) return node;
		return parent[node] = findUltparent(parent[node]);
	}

	bool unionBySize(int u, int v) {
		int ultparent_u = findUltparent(u);
		int ultparent_v = findUltparent(v);

		if(ultparent_u == ultparent_v) return false;
		if(size[ultparent_u] > size[ultparent_v]) {
			parent[ultparent_v] = ultparent_u;
			size[ultparent_u] += size[ultparent_v];
		}
		else { // size of v is greater
			parent[ultparent_u] = ultparent_v;
			size[ultparent_v] += size[ultparent_u];

		}	
        return true;
	}
};
class Solution {
public:
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
        int n = edges.size();
		// n is the number of nodes

        vector<int> twoParent(n+1, 0);

        vector<int> cycleEdge1, cycleEdge2;

        for(int i = 0; i < n; i++) {
            int u = edges[i][0];
            int v = edges[i][1];

            if(twoParent[v] == 0) twoParent[v] = u;
            else {
                cycleEdge1 = {twoParent[v], v};
                cycleEdge2 = {u, v};

                edges[i][1] = 0; // remove the 2nd cycle edges 
            }
        }

		DSU ds(n);
		
		for(int i = 0; i < n; i++) {
			int u = edges[i][0];
			int v = edges[i][1];
            // if(v == 0) continue;
			if(ds.findUltparent(u) == ds.findUltparent(v)) {
                if(cycleEdge1.empty()) return {u, v}; // condition for checking if there is a cycle with no node has two parent
                else return cycleEdge1;
            }
            else ds.unionBySize(u, v);
		}

		return cycleEdge2;
    }
};
int main() {

}