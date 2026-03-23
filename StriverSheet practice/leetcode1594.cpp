#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    #define MOD 1000000007
    #define ll long long
    int n, m;
    vector<vector<pair<ll, ll>>> dp;
    pair<ll, ll> f(vector<vector<int>>& grid, int i, int j){
        if(i == m-1 and j == n-1) return {grid[i][j], grid[i][j]};
        if(i == m or j == n) return {LLONG_MAX, LLONG_MIN};
        if(dp[i][j].first != LLONG_MAX and dp[i][j].second != LLONG_MIN) return dp[i][j];
        ll minVal = LLONG_MAX, maxVal = LLONG_MIN;
        // Down
        pair<ll, ll> down = f(grid, i+1, j);
        if(down.first != LLONG_MAX and down.second != LLONG_MIN){
            minVal = min({minVal, grid[i][j] * down.first, grid[i][j] * down.second});
            maxVal = max({maxVal, grid[i][j] * down.first, grid[i][j] * down.second});
        }
        // Right
        pair<ll, ll> right = f(grid, i, j+1);
        if(right.first != LLONG_MAX and right.second != LLONG_MIN){
            minVal = min({minVal, grid[i][j] * right.first, grid[i][j] * right.second});
            maxVal = max({maxVal, grid[i][j] * right.first, grid[i][j] * right.second});
        }
        return dp[i][j] = {minVal, maxVal};
    }
    int maxProductPath(vector<vector<int>>& grid) {
        m = grid.size(), n = grid[0].size();
        dp.resize(m+1, vector<pair<ll, ll>> (n+1, {LLONG_MAX, LLONG_MIN}));
        pair<ll, ll> p = f(grid, 0, 0);
        ll ans = max(p.first, p.second);
        ans = ans % MOD;
        return (ans < 0) ? -1 : ans;


    }
};
int main(){

}