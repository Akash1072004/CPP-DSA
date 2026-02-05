#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
int v;
unordered_set<int>visited;
void add_edge(int src, int dest, bool bi_dir){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
bool dfs(int curr, int end){
    if(curr == end) return true;
    visited.insert(curr);
    for(auto neigh : graph[curr]){
        if(! visited.count(neigh)){
            bool result = dfs(neigh, end);
            if(result) return true;
        }
    }
    return false;
}
bool isPath(int src, int dest){
    return dfs(src,dest);
}
int main(){
    cin >> v;
    graph.resize(v, list<int> ());
    int edge;
    cin >> edge;
    while(edge--){
        int src, dest;
        cin >> src >> dest;
        add_edge(src, dest, true); // for BiDirectional we just send False to the function ...
    }
    int x, y;
    cin >> x >> y;
    cout << isPath(x,y);
}