#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
int v; // no. of vertices ...
void add_edge(int src, int dest, bool bi_dir){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void display(){
    for(int i = 0; i < graph.size(); i++){
        cout << i << " -> ";
        for(auto ele : graph[i]){
            cout << ele << " , ";
        }
        cout <<  endl;
    }
}
bool dfs(unordered_set<int>&vis, int src, int parent){
    vis.insert(src);
    for(auto ele : graph[src]){
        if(vis.count(ele) and ele != parent){
            // cycle detected 
            return true;
        }
        if(!vis.count(ele)){
            bool result = dfs(vis, ele, src);
            if(result) return true;
        }
    }
    return false;
}
bool isCycle(){
    unordered_set<int>vis;
    for(int i = 0; i < v; i++){
        if(!vis.count(i)){
            bool res = dfs(vis, i, -1);
            if(res) return true;
        }
    }
    return false;
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
    display();
    bool ans = isCycle();
    cout << ans;
}