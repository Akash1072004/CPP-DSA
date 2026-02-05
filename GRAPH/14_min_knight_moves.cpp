#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dir = {{-2,-1},{-2,+1},{-1,+2},{-1,-2},{+2,+1},{+2,-1},{+1,-2},{+1,+2}};
map<pair<int,int>,bool>vis;
int m,n;
int bfs(int x, int y){
    queue<pair<int,int>>q; // -> To find the minimum Step for a knight to reach Destination ...
    q.push({x,y});
    // q.push({-1,-1}); we cannot use this method here becasue indexing can go to negative ...
    // use size to check the level ...
    vis[{x,y}] = true;
    int minStep = 0;
    bool flag = false;
    while(not q.empty()){
        int size = q.size();
        while(size--){
            auto cur = q.front();
            int i = cur.first;
            int j = cur.second;
            q.pop();
            for(int d = 0; d < 8; d++){
                int newRow = i+dir[d][0];
                int newCol = j+dir[d][1];
                if(vis[{newRow,newCol}]) continue;
                if(newRow == 0 and newCol == 0) return minStep+1;
                vis[{newRow,newCol}] = true;
                q.push({newRow, newCol});
            }
        }
        minStep++;
    }
    return minStep;
}
int main(){
    int x, y; cin >> x >> y;
    if(x < 0) x*=(-1);
    if(y < 0) y*=(-1);
    m = x+1, n = y+1;
    if(x == 0 and y == 0)cout << 0 << endl;
    else cout << bfs(x,y)  << endl;   
}