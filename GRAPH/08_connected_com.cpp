#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
unordered_set<int>visited;
int v; // no. of vertices ...
void add_edge(int src, int dest, bool bi_dir){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void dfs(int node){
    visited.insert(node);
    for(auto ele : graph[node]){
        if(visited.count(ele) == 0) dfs(ele);
    }
}
int connected_components(){
    int result = 0;
    for(int i = 0; i < v; i++){
        if(visited.count(i) == 0){
            result++;
            dfs(i);
        }
    }
    return result;
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
    cout << connected_components();
}