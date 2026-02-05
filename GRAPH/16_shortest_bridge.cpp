#include<bits/stdc++.h>
using namespace std;
vector<vector<bool>>visited;
void dfs(vector<vector<int>>&v, int i, int j){
    if(i < 0 or j < 0 or i >= v.size() or j >= v[0].size())return;
    if(visited[i][j])return;
    visited[i][j] =  true;
    if(v[i][j] == 0)return;
    v[i][j] = -1;
    dfs(v,i+1,j);
    dfs(v,i-1,j);
    dfs(v,i,j+1);
    dfs(v,i,j-1);
}
vector<vector<int>>dir = {{-1,0},{1,0},{0,-1},{0,1}};
int shortestBridge(vector<vector<int>>& grid) {
    queue<pair<int,int>>q;
    int m = grid.size();
    int n = grid[0].size();
    visited.resize(m, vector<bool>(n, false));
    vector<vector<bool>>vis(m, vector<bool>(n, false));
    bool flag = false;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == 1){
                dfs(grid,i,j);
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    for(int i = 0; i < m; i++){
        for(int j  = 0; j < n; j++){
            if(grid[i][j] == 1){
                if(i+1 < m and grid[i+1][j] == 0){
                    q.push({i,j});
                    vis[i][j] = true;
                }
                if(i-1 >= 0 and grid[i-1][j] == 0){
                    q.push({i,j});
                    vis[i][j] = true;
                }
                if(j+1 < n and grid[i][j+1] == 0){
                    q.push({i,j});
                    vis[i][j] = true;
                }
                if(j-1 >= 0 and grid[i][j-1] == 0){
                    q.push({i,j});
                    vis[i][j] = true;
                }
            }
        }
    }
    int minStep = 0;
    while(!q.empty()){
        int size = q.size();
        while(size--){
            auto cur = q.front();
            int i = cur.first;
            int j = cur.second;
            q.pop();
            for(int d = 0; d < 4; d++){
                int newRow = i+dir[d][0];
                int newCol = j+dir[d][1];
                if(newRow < 0 or newCol < 0 or newRow >= m or newCol >= n)continue;
                if(vis[newRow][newCol])continue;
                vis[newRow][newCol] = true;
                if(grid[newRow][newCol] == 1)continue;
                if(grid[newRow][newCol] == -1)return minStep;
                q.push({newRow,newCol});
            }
        }
        minStep++;
    }
    return minStep;
}
int main(){
    vector<vector<int>>grid = {{0,1},{1,0}};
    cout << shortestBridge(grid);
}
