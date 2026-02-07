#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v;
void add_edge(int src, int dest, bool isBidir){
    graph[src].push_back(dest);
    if(isBidir){
        graph[dest].push_back(src);
    }
}
void topoBFS(){ // It tells about the dependencies of each other 
    // kahn algorithm 
    vector<int>indegree(v, 0);
    for(int i = 0; i < v; i++){
        for(auto ele : graph[i]){
            // i --> ele , there is an edge so increase the indegree of ele 
            indegree[ele]++;
        }
    }
    
    queue<int>q;
    unordered_set<int>vis;
    for(int i = 0; i < v; i++){
        if(indegree[i] == 0){
            q.push(i);
            vis.insert(i);
        }
    }
    // start multisource BFS
    while(!q.empty()){
        int cur = q.front();
        cout << cur << " ";
        q.pop();
        for(auto ele : graph[cur]){
            if(!vis.count(ele)){
                indegree[ele]--;
                if(indegree[ele] == 0){
                    q.push(ele);
                    vis.insert(ele);
                }
            }
        }

    }
    
}
int main(){
    int e; cin >> v >> e;
    graph.resize(v, list<int>());
    while(e--){
        int src, dest; cin >> src >> dest;
        add_edge(src, dest, false);
    }
    topoBFS();
}