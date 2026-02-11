#include<bits/stdc++.h>
using namespace std;
vector<int>parent, rankk;
int find(int a){
    return parent[a] = (parent[a] == a) ? a : find(parent[a]);
}
void Union(int a, int b){ // LeetCode 1135
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
bool cmp(vector<int>&v1, vector<int>&v2){
    return v1[2] < v2[2];
}
int minimumCost(int n, vector<vector<int>> &connections){
    // Apply the Kruskal Algo 
    sort(connections.begin(), connections.end(), cmp);
    parent.resize(n+1);
    rankk.resize(n+1, 0);
    for(int i = 0; i <= n; i++){
        parent[i] = i;
    }
    int edgeCount = 0;
    int ans = 0;
    for(int i = 0; i < connections.size() and edgeCount < n-1; i++){
        int srcPar = find(connections[i][0]);
        int destPar = find(connections[i][1]);
        if(srcPar != destPar){
            Union(connections[i][0], connections[i][1]);
            ans += connections[i][2]; // add cost
            edgeCount++;
        }
    }
    // return ans;
    return (edgeCount == n-1) ? ans : -1; /// this is also a method to detect the connected component
}
int main(){
    int n = 3; // take n = 4 for second test case
    vector<vector<int>> connections = {{1,2,5}, {1,3,6}, {2,3,1}};
    // vector<vector<int>> connections = {{1,2,3}, {3,4,4}};
    cout << minimumCost(n, connections);
    // int ans = minimumCost(n, connections);
    // int conCom = 0;
    // for(int i = 1; i <= n; i++){
    //     if(parent[i] == i) conCom++;
    // }
    // cout << ((conCom == 1) ? ans : -1);
}