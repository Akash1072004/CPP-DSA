#include<bits/stdc++.h>
using namespace std;
vector<vector<bool>>vis;
int m, n;
bool dfs(vector<vector<char>>& grid, char ch, int i, int j, pair<int,int> parent) {
    if(i < 0 or j < 0 or i >= m or j >= n)return false;
    if(vis[i][j]) return false; // This is the DFS method 
    vis[i][j] = true;
    bool ans = false;
    if(i+1 < m and grid[i+1][j] == ch){ // check before going to that location i.e cycle or not 
        if(vis[i+1][j] and !(i+1 == parent.first and j == parent.second))return true;
        ans |= dfs(grid, ch, i+1, j, {i,j});
    }
    if(i-1 >= 0 and grid[i-1][j] == ch){
        if(vis[i-1][j] and !(i-1 == parent.first and j == parent.second))return true;
        ans |= dfs(grid, ch, i-1, j, {i,j});
    }
    if(j+1 < n and grid[i][j+1] == ch){
        if(vis[i][j+1] and !(i == parent.first and j+1 == parent.second))return true;
        ans |= dfs(grid, ch, i, j+1, {i,j});
    }
    if(j-1 >= 0 and grid[i][j-1] == ch){
        if(vis[i][j-1] and !(i == parent.first and j-1 == parent.second))return true;
        ans |= dfs(grid, ch, i, j-1, {i,j});
    }
    return ans;
}
bool containsCycle(vector<vector<char>>& grid) {
    m = grid.size();
    n = grid[0].size();
    vis.resize(m, vector<bool>(n, false));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            char ch = grid[i][j];
            if(!vis[i][j]){
                bool res = dfs(grid, ch, i, j, {i,j});
                if(res) return true;
            }
        }
    }
    return false; 
}
int main(){
    vector<vector<char>> grid = {{'a','a','a','a'},{'a','b','b','a'},{'a','b','b','a'},{'a','a','a','a'}};
    cout << containsCycle(grid);
}
