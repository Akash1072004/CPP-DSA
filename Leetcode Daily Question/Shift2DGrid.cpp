#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> ans(m, vector<int> (n));

        k %= (m*n);

        int newRow = k/n;
        int newCol = k - (n*newRow);

        int a = 0, b = 0;
        for(int i = newRow; i < m; i++) {
            int start = (i == newRow ? newCol : 0);
            for(int j = start; j < n; j++) {
                ans[i][j] = grid[a][b];
                b++;
                if(b == n) {
                    a++;
                    b = 0; 
                } 
            }
        }

        for(int i = 0; i <= newRow; i++) {
            int end = (i == newRow ? newCol : n);
            for(int j = 0; j < end; j++) {
                ans[i][j] = grid[a][b];
                b++;
                if(b == n) {
                    a++;
                    b = 0;
                }
                if(a == m) break;
            }
        }

        return ans;

    }
};
int main() {

}