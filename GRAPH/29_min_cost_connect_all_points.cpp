#include<bits/stdc++.h>
using namespace std;
vector<int>parent, rankk;
int find(int a){
    return parent[a] = (parent[a] == a) ? a : find(parent[a]);
}
void Union(int a, int b){ 
    a = find(a);
    b = find(b);
    if(a == b) return;
    if(rankk[a] >= rankk[b]){
        parent[b] = a;
        rankk[a]++;
    }
    else {
        parent[a] = b;
        rankk[b]++;
    }
}
struct edge {
    int src; 
    int dest; 
    int wt;
};
vector<edge> cost;
static bool cmp(edge e1, edge e2){
    return e1.wt < e2.wt;
}
int kruskal(int n){
    parent.resize(n+1);
    rankk.resize(n+1, 0);
    for(int i = 0; i <= n; i++) {
        parent[i] = i;
    }
    // apply kruskal
    sort(cost.begin(), cost.end(), cmp);
    int edgeCount = 0;
    int ans = 0;
    for(int i = 0; i < cost.size() and edgeCount < n-1; i++){
        int srcPar = find(cost[i].src);
        int destPar = find(cost[i].dest);
        if(srcPar != destPar){
            Union(cost[i].src, cost[i].dest);
            ans += cost[i].wt;
            edgeCount++;
        }
    }
    return ans;
}
int minCostConnectPoints(vector<vector<int>>& points) {
    int n = points.size();
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            edge e;
            e.src = i; e.dest = j; 
            e.wt = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
            cost.push_back(e);
        }
    }
    return kruskal(n);
}
int main(){
    vector<vector<int>> points = {{0,0}, {2,2}, {3,10}, {5,2}, {7,0}};
    cout << minCostConnectPoints(points);
}
