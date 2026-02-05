#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>h;
int m,n;
vector<vector<int>>dir = {{-1,0},{1,0},{0,-1},{0,1}};
vector<vector<bool>> bfs(queue<pair<int,int>>&q){
    vector<vector<bool>>vis(m,vector<bool>(n,false));
    while(not q.empty()){ // we can write q.size() != 0
        auto cur = q.front();
        q.pop();
        int i = cur.first;
        int j = cur.second;
        vis[i][j] = true;
        for(int d = 0; d < 4; d++){
            int newRow = i + dir[d][0];
            int newCol = j + dir[d][1];
            if(newRow < 0 or newCol < 0 or newRow >=m or newCol >= n) continue;
            if(vis[newRow][newCol]) continue;
            if(h[i][j] > h[newRow][newCol])continue;
            q.push({newRow,newCol});
        }
    }
    return vis;
}
vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
    m = heights.size();
    n = heights[0].size();
    h = heights;
    queue<pair<int,int>>pacificBfs;
    queue<pair<int,int>>atlanticBfs;
    for(int i = 0; i < m; i++){
        pacificBfs.push({i,0});
        atlanticBfs.push({i,n-1});
    }
    for(int j = 0; j < n; j++){
        pacificBfs.push({0,j});
        atlanticBfs.push({m-1,j});
    }
    vector<vector<bool>>pacificAns = bfs(pacificBfs);
    vector<vector<bool>>atlanticAns = bfs(atlanticBfs);
    vector<vector<int>>ans;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(pacificAns[i][j] && atlanticAns[i][j]) ans.push_back({i,j});
        }
    }
    return ans;


}
int main(){
    vector<vector<int>> height = {{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}};
    vector<vector<int>>ans = pacificAtlantic(height);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
}