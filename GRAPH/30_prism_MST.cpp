#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
vector<list<pp>> graph;
void add_edge(int src, int dest, int wt, bool biDir){
    graph[src].push_back({wt, dest});
    if(biDir){
        graph[dest].push_back({wt, src});
    }
}
int prismMST(int source, int n){
    priority_queue<pp, vector<pp>, greater<pp> > pq; // {wt, node}
    unordered_map<int,int> mp;
    vector<int>parent(n+1);
    unordered_set<int>vis;
    pq.push({0, source}); // initilise source node by 0
    for(int i = 0; i <= n; i++){
        mp[i] = INT_MAX;
    }
    mp[source] = 0;
    int edgeCount = 0; // we know that in tree for n node we should have n-1 edge
    int result = 0;
    while(edgeCount < n and !pq.empty()){ // total edge should be upto n
        pp cur = pq.top();
        pq.pop();
        if(vis.count(cur.second)) continue;
        else {
            vis.insert(cur.second);
            edgeCount++;
            result += cur.first;
            for(pp ele : graph[cur.second]){
                if(!vis.count(ele.second) and ele.first < mp[ele.second]){
                    pq.push(ele);
                    mp[ele.second] = ele.first;
                    parent[ele.second] = cur.second;
                }
            }
        }
    }
    return result;  
}
int main(){
    int n, e; cin >> n >> e;
    graph.resize(n+1, list<pp>());
    while(e--){
        int src, dest, wt; cin >> src >> dest >> wt;
        add_edge(src, dest, wt, true);
    }
    int source; cin >> source;
    cout << prismMST(source, n);
}