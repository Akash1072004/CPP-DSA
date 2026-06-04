#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> dijkstra(int v, vector<vector<int>> &edges, int src) {
        // Code here
        vector<pair<int, int>> graph[v];
        
        for(int i = 0; i < edges.size(); i++) {
            graph[edges[i][0]].push_back({edges[i][2], edges[i][1]});
            graph[edges[i][1]].push_back({edges[i][2], edges[i][0]});
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
        
        pq.push({0, src});
        
        vector<int> ans(v, 1e9);
        
        vector<bool> vis(v, false);
        
        ans[src] = 0;
        
        while(!pq.empty()) {
            int node = pq.top().second;
            int dist = pq.top().first;
            
            pq.pop();
            
            if(vis[node]) continue;
            vis[node] = true;
            
            for(auto ele : graph[node]) {
                if(ele.first + dist < ans[ele.second]) {
                    ans[ele.second] = ele.first + dist;
                    pq.push({ele.first+dist, ele.second});
                }
            }
        }
        
        return ans;
        
    }
};
int main() {

}