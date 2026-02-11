#include<bits/stdc++.h>
using namespace std;
int find(vector<int>&parent, int a){ // apply DSU 
    return parent[a] = (parent[a] == a) ? a : find(parent, parent[a]);
}
void Union(vector<int>& parent, vector<int>& rank, int a, int b){
    a = find(parent, a);
    b = find(parent, b);
    if(a == b) return;
    if(rank[a] >= rank[b]){
        parent[b] = a;
        rank[a]++;
    }
    else {
        parent[a] = b;
        rank[b]++;
    }
}
struct edge {
    int src;
    int dest;
    int weight;
};
bool cmp(edge e1, edge e2){
    return e1.weight < e2.weight;
}
int kruskal(vector<edge> v, int n, int e){ // Kruskal Algorithm 
    vector<int>parent(n+1);
    vector<int>rank(n+1, 0);
    for(int i = 0; i <= n; i++){
        parent[i] = i;
    }
    // sort the vector by edges
    sort(v.begin(), v.end(), cmp);
    int ans = 0;
    int edgeCount = 0;
    for(int i = 0; i < e and edgeCount < n-1; i++){
        // find the source parent and dest parent
        int srcPar = find(parent, v[i].src);
        int destPar = find(parent, v[i].dest);
        if(srcPar != destPar){ 
            // mean, there is not any cycle formed after Union becasue parents of dest and src are not equal 
            Union(parent, rank, srcPar, destPar);
            ans += v[i].weight;
            edgeCount++;
        }
    }
    return ans;
}
int main(){
    int n, e; cin >> n >> e;
    int ans = 0;
    vector<edge> v(e);
    for(int i = 0; i < e; i++) {
        cin >> v[i].src >> v[i].dest >> v[i].weight;
    }
    cout << kruskal(v, n, e);
}