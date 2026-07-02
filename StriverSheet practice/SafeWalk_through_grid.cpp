#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        
        int m = grid.size();
        int n = grid[0].size();

        priority_queue<pair<int, pair<int, int >> > pq;

        if(grid[0][0] == 1) health--;

        pq.push({health, {0, 0}});

        vector<vector<int>> minHealthUse(m, vector<int> (n, 0)); // store maximum health remaining for each cell

        minHealthUse[0][0] = health;

        int dr[] = {-1, +1, 0, 0};
        int dc[] = {0, 0, -1, +1};

        while(!pq.empty()) {
            auto it = pq.top();
            int curHealth = it.first;
            int i = it.second.first;
            int j = it.second.second;

            pq.pop();

            for(int d = 0; d < 4; d++) {
                int newRow = i+dr[d];
                int newCol = j+dc[d];

                if(newRow < 0 || newCol < 0 || newRow >= m || newCol >= n) continue;

                int newHealth = curHealth - grid[newRow][newCol];
                if(minHealthUse[newRow][newCol] < newHealth) {
                    minHealthUse[newRow][newCol] = newHealth;

                    pq.push({newHealth, {newRow, newCol}});
                }
            }
        }

        return (minHealthUse[m-1][n-1] <= 0) ? false : true;

    }
};
int main() {

}