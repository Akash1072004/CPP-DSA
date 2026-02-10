#include<bits/stdc++.h>
using namespace std;
vector<int>parent, size;
int find(int x){ // Apply DSU 
    return parent[x] = (parent[x] == x) ? x : find(parent[x]);
}
void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a == b) return;
    if(size[a] >= size[b]){
        parent[b] = a;
        size[a] += size[b];
    }
    else {
        parent[a] = b;
        size[b] += size[a];
    }
}
long long countPairs(int n, vector<vector<int>>& edges) {
    parent.resize(n+1);
    size.resize(n+1, 1);
    for(int i = 0; i < n; i++){
        parent[i] = i;
    }
    for(int i = 0; i < edges.size(); i++){
        Union(edges[i][0], edges[i][1]);
    }
    int conCom = 0;
    vector<int>ans;
    for(int i = 0;  i < n; i++){
        if(parent[i] == i){
            conCom++;
            ans.push_back(size[i]);
        }
    }
    long long sufixSum = 0;
    long long unReachable = 0;
    for(int i = ans.size()-2; i >= 0; i--){
        sufixSum += ans[i+1];
        unReachable += (ans[i]*sufixSum);
    }
    return unReachable;
}
int main(){
    vector<vector<int>> edges = {{0,1},{0,2},{1,2}};
    cout << countPairs(3,edges);
}
