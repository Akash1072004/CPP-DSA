#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dir = {{-1,0},{1,0},{0,-1},{0,1}};
void solve(vector<vector<char>>& board) {
    int m = board.size();
    int n = board[0].size();
    vector<vector<char>>ans(m, vector<char>(n,'a'));
    vector<vector<bool>>vis(m, vector<bool>(n, false));
    queue<pair<int,int>>q;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if((i == 0 or j == 0 or i == m-1 or j == n-1) and board[i][j] == 'O'){
                q.push({i,j});
                vis[i][j] = true;
                ans[i][j] = 'O';
            }
        }
    }
    while(!q.empty()){
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
            if(board[newRow][newCol] == 'O'){
                ans[newRow][newCol] = 'O';
                q.push({newRow, newCol});
            }
            else continue;
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(ans[i][j] != 'O')board[i][j] = 'X';
        }
    }


}
int main(){
    vector<vector<char>> board = {{'X','X','X','X'},{'X','O','O','X'},{'X','X','O','X'},{'X','O','X','X'}};
    solve(board);
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[0].size(); j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}