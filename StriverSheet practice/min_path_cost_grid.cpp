#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>v, v2;
int m, n;
vector<vector<int>>dp;
int f(int i, int j){
    if(i == m-1) return v[i][j];
    if(dp[i][j] != -1) return dp[i][j];
    int ans = INT_MAX;
    for(int k = 0; k < n; k++){
        ans = min(ans, v[i][j]+v2[v[i][j]][k]+f(i+1,k));
    }
    return dp[i][j] = ans;
}
int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
    v = grid; v2 = moveCost;
    int ans = INT_MAX;
    m = grid.size(), n = grid[0].size();
    dp.resize(m+1, vector<int>(n+1, -1));
    for(int j = 0; j < n; j++){
        ans = min(ans, f(0,j));
    }
    return ans;
}
int main(){
    vector<vector<int>> grid = {{5,3},{4,0},{2,1}};
    vector<vector<int>> moveCost = {{9,8},{1,5},{10,12},{18,6},{2,4},{14,3}};
    cout << minPathCost(grid, moveCost);
}
