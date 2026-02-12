#include<bits/stdc++.h>
using namespace std;
bool isBipartite(vector<vector<int>>& graph) {
    int n = graph.size();
    queue<int>q;
    vector<int>color (n);
    unordered_set<int>vis;
    for(int node = 0; node < n; node++){
        if(vis.count(node))continue;
        color[node] = 0;
        q.push(node);
        vis.insert(node);
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for(auto ele : graph[cur]){
                if(vis.count(ele) and color[ele] == color[cur]) return false;
                if(vis.count(ele))continue;
                vis.insert(ele); // mark visited when pushing not when poping
                color[ele] = !color[cur];
                q.push(ele);
            }
        }
    }
    return true;
}
int main(){
    vector<vector<int>> graph = {{1,2,3}, {0,2}, {0,1,3}, {0,2}};
    cout << isBipartite(graph);
}