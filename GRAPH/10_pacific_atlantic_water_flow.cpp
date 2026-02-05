#include<bits/stdc++.h>
using namespace std;
int m, n;
vector<vector<int>>ans;
vector<vector<int>>vis;
vector<vector<int>>d = {{-1,0},{+1,0},{0,+1},{0,-1}};
void dfs(vector<vector<int>>&v, int i, int j, int initialVal){
    if(i < 0 or j < 0 or i == m or j == n)return;
    if(vis[i][j] & initialVal) return;   // already visited by this ocean
    vis[i][j] |= initialVal; 
    for(int k = 0; k < d.size(); k++){
        if(i+d[k][0] < m and i+d[k][0] >=0  and j+d[k][1] < n and j+d[k][1] >= 0 and v[i][j] <= v[i+d[k][0]][j+d[k][1]]) dfs(v,i+d[k][0],j+d[k][1],initialVal);
    }
}
vector<vector<int>> pacificAtlantic(vector<vector<int>>& v) {
    m = v.size();
    n = v[0].size();
    vis.resize(m,vector<int>(n,0));
    for(int j = 0; j < n; j++){ // for column for pacific ocean
        dfs(v,0,j,1);
    }
    for(int i = 0; i < m; i++){ // for row for pacific ocean
        dfs(v,i,0,1);
    }
    for(int j = 0; j < n; j++){ // for column for atlantic 
        dfs(v,m-1,j,2);
    }
    for(int i = 0; i < m; i++){ // for column for atlantic 
        dfs(v,i,n-1,2);
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(vis[i][j] == 3)ans.push_back({i,j});
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> height = {{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}};
    pacificAtlantic(height);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
}
