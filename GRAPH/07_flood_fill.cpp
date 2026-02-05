#include<bits/stdc++.h>
using namespace std;    
void dfs(vector<vector<int>>&v, int sr, int sc, int color, int m, int n, int initialColor){
    if(sr < 0 or sc < 0 or sr == m or sc == n)return;
    if(v[sr][sc] != initialColor)return;
    v[sr][sc] = color;
    dfs(v,sr+1,sc,color,m,n,initialColor);
    dfs(v,sr-1,sc,color,m,n,initialColor);
    dfs(v,sr,sc+1,color,m,n,initialColor);
    dfs(v,sr,sc-1,color,m,n,initialColor);
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int m = image.size();
    int n = image[0].size();
    int initialColor = image[sr][sc];
    if(initialColor == color) return image;
    dfs(image,sr,sc,color,m,n,image[sr][sc]);
    return image;


    
}
int main(){
    vector<vector<int>> image = {{1,1,1},{1,1,0},{1,0,1}};
    int sr = 1, sc = 1, color = 2;
    floodFill(image,sr,sc,color);
    for(int i = 0; i < image.size(); i++){
        for(int j = 0; j < image[i].size(); j++){
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
}