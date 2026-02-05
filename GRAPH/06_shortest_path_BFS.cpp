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
void bfs(int src, vector<int>&dist){
    queue<int>q;
    dist.resize(v,INT_MAX);
    dist[src] = 0;
    visited.insert(src);
    q.push(src);
    while(q.size() != 0){
        int curr = q.front();
        q.pop();
        for(auto ele : graph[curr]){
            if(!visited.count(ele)){
                q.push(ele);
                visited.insert(ele);
                dist[ele] = dist[curr] + 1;
            }
        }

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
    vector<int>dist;
    int x;
    cin >> x;
    bfs(x,dist);
    for(auto ele : dist){
        cout << ele << " ";
    }
}