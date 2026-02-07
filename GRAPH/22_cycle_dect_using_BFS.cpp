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
bool bfs(int src){
    unordered_set<int>vis;
    vector<int>parent(v, -1);
    queue<int>q;
    q.push(src);
    vis.insert(src);
    parent[src] = -1;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(auto ele : graph[cur]){
            if(vis.count(ele) and parent[cur] != ele) return true;
            if(!vis.count(ele)){
                q.push(ele);;
                vis.insert(ele);
                parent[ele] = cur;
            }
        }
    }
    return false;
}
bool isCycle(){
    for(int i = 0; i < v; i++){
        bool res = bfs(i);
        if(res) return true;
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