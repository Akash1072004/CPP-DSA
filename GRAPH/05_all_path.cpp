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
void dfs(int curr, int end, vector<vector<int>>&path, vector<int>ans){
    if(curr == end){
        ans.push_back(curr);
        path.push_back(ans);
        ans.pop_back();
        return;
    }
    visited.insert(curr); // mark visited ...
    ans.push_back(curr);
    for(auto neigh : graph[curr]){
        if(!visited.count(neigh)){
            dfs(neigh,end,path,ans);
        }
    }
    visited.erase(curr);
    return;
}
void allPath(int src, int dest){
    vector<vector<int>>path;
    dfs(src,dest,path,{});
    for(int i = 0; i < path.size(); i++){
        for(int j = 0; j < path[i].size(); j++){
            cout << path[i][j] << " -> ";
        }
        cout << endl;
    }
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
    allPath(x,y);
}