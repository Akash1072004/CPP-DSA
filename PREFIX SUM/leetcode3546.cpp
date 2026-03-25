#include <bits/stdc++.h>
using namespace std;
#define ll long long 
bool canPartitionGrid(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<ll> prefixRow(n-1, 0);
    vector<ll> suffixRow(n-1, 0);
    ll sum = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < m; j++){
            sum += grid[i][j];
        }
        prefixRow[i] = sum;
    }
    sum = 0;
    for(int i = n-1; i > 0; i--){
        for(int j = 0; j < m; j++){
            sum += grid[i][j];
        }
        suffixRow[i-1] = sum;
    }
    vector<ll> prefixCol(m-1, 0);
    vector<ll> suffixCol(m-1, 0);
    sum = 0;
    for(int i = 0; i < m-1; i++){
        for(int j = 0; j < n; j++){
            sum += grid[j][i];
        }
        prefixCol[i] = sum;
    }
    sum = 0;
    for(int i = m-1; i > 0; i--){
        for(int j = 0; j < n; j++){
            sum += grid[j][i];
        }
        suffixCol[i-1] = sum;
    }
    for(int i = 0; i < n-1; i++){
        if(prefixRow[i] == suffixRow[i]) return true;
    }
    for(int i = 0; i < m-1; i++){
        if(prefixCol[i] == suffixCol[i]) return true;
    }
    return false;
}
int main(){
    vector<vector<int>> grid = {{1, 4}, {2, 3}};
    cout << canPartitionGrid(grid);
}