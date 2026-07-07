#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<bool> vis;
    vector<int> ans;
    void dfs(vector<int> adj[], int node, int parent, int timer, vector<int>& tin, vector<int>& low) {
        vis[node] = true;
        tin[node] = low[node] = timer;
        int child = 0;
        for(auto it : adj[node]) {
            if(it == parent) continue;
            if(!vis[it]) {
                child++;
                dfs(adj, it, node, timer+1, tin, low);
                low[node] = min(low[node], low[it]); // important while returning
                
                if(low[it] >= tin[node] && parent != -1) {
                    ans[node] = true;
                }
            }
            else {
                low[node] = min(low[node], tin[it]);
            }
        }
        if(parent == -1 && child > 1) ans[node] = true;
    }
    vector<int> articulationPoints(int n, vector<int> adj[]) {
        // Code here
        
        vis.resize(n, false);
        vector<int> tin(n, -1), low(n, -1);
        ans.resize(n, false);
        dfs(adj, 0, -1, 0, tin, low);
        vector<int> finalAns;
        for(int i = 0; i < n; i++) {
            if(ans[i]) finalAns.push_back(i);
        }
        if(finalAns.empty()) return {-1};
        else return finalAns;
    }
};
int main() {

}