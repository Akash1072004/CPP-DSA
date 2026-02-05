#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
vector<vector<bool>>vis;
int m,n;
vector<vector<int>>dir = {{-1,0},{1,0},{0,-1},{0,1}};
void bfs(queue<pair<int,int>>&q){
    while(not q.empty()){
        auto cur = q.front();
        int i = cur.first;
        int j = cur.second;
        q.pop();
        for(int d = 0; d < 4; d++){
            int nr = i+dir[d][0];
            int nc = j+dir[d][1];
            if(nr < 0 or nc < 0 or nr >= m or nc >= n)continue;
            if(vis[nr][nc]) continue;
            vis[nr][nc] = true;
            ans[nr][nc] = ans[i][j] + 1;
            q.push({nr,nc});
        }
    }
}
vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    m = mat.size();
    n = mat[0].size();
    vis.resize(m, vector<bool>(n,false));
    queue<pair<int,int>>q;
    ans.resize(m, vector<int>(n,-1));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] ==  0) {
                q.push({i,j});
                ans[i][j] = 0;
                vis[i][j] = true;
            }
        }
    }
    bfs(q);
    return ans;
}
int main(){
    vector<vector<int>> mat = {{0,0,0},{0,1,0},{1,1,1}};
    updateMatrix(mat);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}