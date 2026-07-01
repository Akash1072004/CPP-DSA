#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bfs(vector<vector<int>>& minDistance, vector<vector<int>>& grid, int n) {
        priority_queue<pair<int, pair<int, int>> > pq;

        pq.push({minDistance[0][0], {0, 0}});

        int dr[] = {-1, +1, 0, 0};
        int dc[] = {0, 0, -1, +1};

        vector<vector<bool>> vis(n, vector<bool> (n, false));

        // vector<vector<int>> ans(n, vector<int> (n, 0));

        while(!pq.empty()) {
            auto it = pq.top();
            int curDistance = it.first;
            int i = it.second.first;
            int j = it.second.second;

            pq.pop();
            if(vis[i][j]) continue;
            vis[i][j] = true;

            if (i == n - 1 && j == n - 1) return curDistance;

            for(int dir = 0; dir < 4; dir++) {
                int newRow = i+dr[dir];
                int newCol = j+dc[dir];

                if(newRow < 0 || newCol < 0 || newRow >= n || newCol >= n) continue;

                if(vis[newRow][newCol]) continue;

                int newDistance = min(curDistance, minDistance[newRow][newCol]);
                
                pq.push({newDistance, {newRow, newCol}});
            }
        }

        return 0;
    }
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        
        int n = grid.size();

        if(grid[0][0] == 1 || grid[n-1][n-1] == 1) return 0;

        queue<pair<int, int> > qu;
        vector<vector<int>> minDistance(n, vector<int> (n, 1e9));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) {
                    qu.push({i, j});
                    minDistance[i][j] = 0;
                }
            }
        }

        int dr[] = {-1, +1, 0, 0};
        int dc[] = {0, 0, -1, +1};

        while(!qu.empty()) {
            auto it = qu.front();
            int i = it.first;
            int j = it.second;
            qu.pop();

            int curDistance = minDistance[i][j];
            for(int dir = 0; dir < 4; dir++) {
                int newRow = i+dr[dir];
                int newCol = j+dc[dir];

                if(newRow < 0 || newCol < 0 || newRow >= n || newCol >= n) continue;

                if(minDistance[newRow][newCol] > curDistance + 1) {
                    minDistance[newRow][newCol] = curDistance + 1;
                    qu.push({newRow, newCol});
                }
            }
        }

        return bfs(minDistance, grid, n);

    }
};
int main() {

}