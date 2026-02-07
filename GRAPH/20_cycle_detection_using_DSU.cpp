#include<bits/stdc++.h>
using namespace std;
int find(vector<int>&parent, int x){
    return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}
bool Union(vector<int>&parent, vector<int>& rank, int a, int b){
    a = find(parent, a);
    b = find(parent, b);
    if(a == b)return false;
    if(rank[a] >= rank[b]){
        parent[b] = a;
        rank[a]++;
    }
    else {
        parent[a] = b;
        rank[b]++;
    }
    return true;
}
int main(){  // we can detect the cycle using DSU 
    int v, e; cin >> v >> e;
    vector<int>parent(v+1);
    vector<int>rank(v+1, 0);
    for(int i = 0; i <= v; i++){
        parent[i] = i;
    }
    while(e--){
        int x, y; cin >> x >> y;
        bool ans = Union(parent, rank, x, y);
        if(!ans) cout << "Cycle Detected" << endl;
    }
}