#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
unordered_set<int>vis;
void dfs(int i){
    if(vis.count(i))return;
    vis.insert(i);
    for(auto ele : graph[i]){ // This is DFS method ...
        dfs(ele);
    }
}
int removeStones(vector<vector<int>>& stones) {
    int m = stones.size();
    graph.resize(m, list<int>());
    for(int i = 0; i < m; i++){
        for(int j = i+1; j < m; j++){
            if(stones[i][0] == stones[j][0] or stones[i][1] == stones[j][1]){
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }
    int cc = 0;
    for(int i = 0; i < m; i++){
        if(!vis.count(i)){
            cc++;
            dfs(i);
            vis.insert(i);
        }
    }
    return m - cc;
}
int main(){
    vector<vector<int>>stones = {{0,0},{0,1},{1,0},{1,2},{2,1},{2,2}};
    cout << removeStones(stones);
}
