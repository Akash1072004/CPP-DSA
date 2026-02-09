#include<bits/stdc++.h>
using namespace std;
vector<int>parent;
vector<int>rankk;
int find(int x){
    return parent[x] = (parent[x] == x) ? x : find(parent[x]);
}
void Union(int a, int b){ // This is DSU method ...
    a = find(a);
    b = find(b);
    if(a == b)return ;
    if(rankk[a] >= rankk[b]){
        parent[b] = a;
        rankk[a]++;
    }
    else {
        parent[a] = b;
        rankk[b]++;
    }
}
int removeStones(vector<vector<int>>& stones) {
    int n = stones.size();
    parent.resize(n);
    rankk.resize(n,0);
    for(int i = 0; i < n; i++){
        parent[i] = i;
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(stones[i][0] == stones[j][0] or stones[i][1] == stones[j][1]){
                Union(i,j);
            }
        }
    }
    int conectedComponent = 0;
    for(int i = 0; i < parent.size(); i++){
        if(parent[i] == i) conectedComponent++;
    }
    int ans = n - conectedComponent;
    return ans;
}
int main(){
    vector<vector<int>>stones = {{0,0},{0,1},{1,0},{1,2},{2,1},{2,2}};
    cout << removeStones(stones);
}
