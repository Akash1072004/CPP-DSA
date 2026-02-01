#include<bits/stdc++.h>
using namespace std;
int f(int n, int row, int col,vector<vector<int>>&v){
    if(row == n-1 && col == n-1)return 1;
    if(row == n or col == n or row < 0 or col < 0)return 0;
    if(v[row][col] == 2)return 0;
    v[row][col] = 2;
    int ways = f(n,row,col+1,v) + f(n,row,col-1,v) + f(n,row-1,col,v) + f(n,row+1,col,v);
    v[row][col] = 0;
    return ways;
}
int main(){ // Rat in a maze Problem ...
    int n;
    cin >> n;
    vector<vector<int>>v(n,vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }
    // vector<vector<int>>v = {{0,0,2},{0,2,0},{0,0,0}};
    cout << f(n,0,0,v);
}