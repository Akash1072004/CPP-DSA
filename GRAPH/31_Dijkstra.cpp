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
unordered_map<int,int> Dijkstra(int source, int n){
    priority_queue<pp, vector<pp>, greater<pp> > pq; // {distance from source, node} 
    unordered_map<int,int> mp;
    unordered_set<int>vis;
    vector<int>parent(n);
    for(int i = 0; i < n; i++){
        mp[i] = INT_MAX;
    }
    mp[source] = 0;
    pq.push({0, source});
    // Aplly the Dijkstra Algo 
    while(!pq.empty()){
        pp cur = pq.top();
        pq.pop();
        if(vis.count(cur.second))continue;
        vis.insert(cur.second);
        for(auto ele : graph[cur.second]){
            if(!vis.count(ele.second) and mp[ele.second] > cur.first + ele.first){
                pq.push({(cur.first + ele.first), ele.second});
                // update the value which is (src to cur + cur to ele)
                mp[ele.second] = cur.first + ele.first;
                parent[ele.second] = cur.second;
            }
        }
    }
    return mp;
}
int main(){
    int n, e; cin >> n >> e;
    graph.resize(n, list<pp>());
    while(e--){
        int src, dest, wt; cin >> src >> dest >> wt;
        add_edge(src, dest, wt, true);
    }
    int source; cin >> source;
    unordered_map<int,int> mp = Dijkstra(source, n);
    int dest; cin >> dest;
    cout << mp[dest] << endl;
    for(auto ele : mp){
        cout << ele.first << " " << ele.second << endl;
    }
}