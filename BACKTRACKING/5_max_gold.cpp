#include<bits/stdc++.h>
using namespace std;
int f(vector<vector<int>>& v, int row, int col, int m, int n) {
    // boundary + zero check
    if (row < 0 || col < 0 || row >= m || col >= n || v[row][col] == 0)
        return 0;

    int gold = v[row][col];   // store current gold
    v[row][col] = 0;          // mark visited

    int best = 0;
    best = max({
        f(v, row, col + 1, m, n),
        f(v, row, col - 1, m, n), // Leetcode 1219...
        f(v, row + 1, col, m, n),
        f(v, row - 1, col, m, n)
    });

    v[row][col] = gold;       // backtrack (restore)

    return gold + best;
}
int getMaximumGold(vector<vector<int>>& grid) {
    int ans = 0;
    int m = grid.size();
    int n = grid[0].size();

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] != 0) {
                ans = max(ans, f(grid, i, j, m, n));
            }
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> grid = {{0,6,0},{5,8,7},{0,9,0}};
    cout << getMaximumGold(grid);
}

