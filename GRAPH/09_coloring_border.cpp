#include<bits/stdc++.h>
using namespace std;
vector<vector<bool>>vis;
vector<vector<int>>border;
void f(vector<vector<int>>&v, int r, int c, int color, int ic, int m, int n){
    if(r < 0 or c < 0 or r == m or c == n) return;
    if(vis[r][c]) return;
    vis[r][c] = true;
    if(v[r][c] != ic)return;  // Leetcode ...
    if(r-1 < 0 or r+1 == m or c+1 ==n or c-1 < 0 or v[r+1][c] != ic or v[r-1][c] != ic or v[r][c+1] != ic or v[r][c-1] != ic){
        border.push_back({r,c});
    }
    // v[r][c] = color;
    f(v,r+1,c,color,ic,m,n);
    f(v,r-1,c,color,ic,m,n);
    f(v,r,c+1,color,ic,m,n);
    f(v,r,c-1,color,ic,m,n);    
}
vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
    int initialColor = grid[row][col];
    int m = grid.size();
    int n = grid[0].size();
    vis.resize(m,vector<bool>(n,false));
    border.clear();
    f(grid,row,col,color, initialColor,m,n);
    for(int i = 0; i < border.size(); i++){
        grid[border[i][0]][border[i][1]] = color;
    }
    return grid;

}
int main(){
    vector<vector<int>> grid = {{1,1}, {1,2}};
    int row = 0, col = 0, color = 3;
    colorBorder(grid, row, col, color);
    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[i].size(); j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}
