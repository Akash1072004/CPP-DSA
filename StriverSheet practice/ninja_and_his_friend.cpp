#include<bits/stdc++.h>
using namespace std;
int m, n;
int dp[51][51][51];
int f(vector<vector<int>>& g, int i, int j, int k){
    if(i >= m or j >= n or j < 0 or k < 0 or k >= n) return 0;
    int cur = 0;
    if(j == k) cur = g[i][j];
    else cur = g[i][j] + g[i][k];
    if(dp[i][j][k] != -1) return dp[i][j][k];
    int ans = 0;
    ans = max(ans, cur+f(g, i+1, j-1, k-1));
    ans = max(ans, cur+f(g, i+1, j-1, k));
    ans = max(ans, cur+f(g, i+1, j-1, k+1));
    ans = max(ans, cur+f(g, i+1, j, k-1));
    ans = max(ans, cur+f(g, i+1, j, k));
    ans = max(ans, cur+f(g, i+1, j, k+1));
    ans = max(ans, cur+f(g, i+1, j+1, k-1));
    ans = max(ans, cur+f(g, i+1, j+1, k));
    ans = max(ans, cur+f(g, i+1, j+1, k+1));
    return dp[i][j][k] = ans;
}
int maxChocolates(vector<vector<int>>& g) {
    // Your code goes here
    m = g.size(), n = g[0].size();
    memset(dp, -1, sizeof dp);
    return f(g, 0, 0, n-1);

}
int main(){
    vector<vector<int>> g = {{2,3,1,2}, {3,4,2,2}, {5,6,3,5}};
    cout << maxChocolates(g);
}