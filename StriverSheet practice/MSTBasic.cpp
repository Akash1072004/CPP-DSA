#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int spanningTree(int v, vector<vector<int>>& edges) {
        // code here
        vector<pair<int, int> > graph[v];
        for(int i = 0; i < edges.size(); i++) {
            graph[edges[i][0]].push_back({edges[i][2], edges[i][1]});
            graph[edges[i][1]].push_back({edges[i][2], edges[i][0]});
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        pq.push({0, 0});
        vector<bool> vis(v, false);
    
        int sum = 0;
        
        while(!pq.empty()) {
            auto it = pq.top();
            int node = it.second;
            int wt = it.first;
            
            pq.pop();
            
            if(vis[node]) continue;
            vis[node] = true;
            
            sum += wt;
            
            for(auto ele : graph[node]) {
                if(!vis[ele.second]) {
                    pq.push(ele);
                }
            }
        }
        
        return sum;
        
    }
};
int main() {

}