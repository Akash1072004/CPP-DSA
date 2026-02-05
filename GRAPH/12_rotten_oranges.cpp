#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>v;
int m,n;
vector<vector<int>>dir = {{-1,0},{1,0},{0,-1},{0,1}};
int bfs(queue<pair<int,int>>&q){
    int time = 0;
    while(not q.empty()){
        auto cur = q.front();
        int i = cur.first;
        int j = cur.second;
        q.pop();
        if(i == -1 and j == -1){
            time++;
            if(!q.empty()) q.push({-1,-1});
            else break;
        }
        for(int d = 0; d < 4; d++){
            int newRow = i+dir[d][0];
            int newCol = j+dir[d][1];
            if(newRow < 0 or newCol < 0 or newRow == m or newCol == n)continue;
            if(v[newRow][newCol] != 1)continue;
            q.push({newRow,newCol});
            v[newRow][newCol] = 2;
        }
    }
    return time;
}
int orangesRotting(vector<vector<int>>& grid) {
    v = grid;
    m = grid.size();
    n = grid[0].size();
    queue<pair<int,int>>q;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(v[i][j] == 2)q.push({i,j});
        }
    }
    q.push({-1,-1});
    int time = bfs(q);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(v[i][j] == 1)return -1;
        }
    }
    return time - 1; // it add extra time because of one last push in queue in BFS function ...

}
int main(){
    vector<vector<int>> grid = {{2,1,1},{1,1,0},{0,1,1}};
    cout << orangesRotting(grid);
}