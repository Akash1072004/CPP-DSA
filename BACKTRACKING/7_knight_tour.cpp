#include<bits/stdc++.h>
using namespace std;
vector<int>dx = {-2, -1, -2, -1, 2, 1, 2, 1};
vector<int>dy = {1, 2, -1, -2, 1, 2, -1, -2};
bool safe(vector<vector<int>>&v, int n, int i, int j){
    return (i>=0 && j>=0 && i<n && j<n && v[i][j] == -1);
}
void f(vector<vector<int>>&v, int n, int i, int j, int count){
    if(count == (n*n) - 1){  // knight Tour ...
        v[i][j] = count;
         for(int l = 0; l < n; l++){
            for(int m = 0; m < n; m++){
                cout << v[l][m] << " ";
            }
            cout << endl;
         }
         cout << endl << "next" << endl;
         v[i][j] = -1;
         return;
    }
    v[i][j] = count;
    for(int k = 0; k < dx.size(); k++){
        if(safe(v,n,i + dx[k],j + dy[k])){
            f(v,n,i+dx[k],j+dy[k],count+1);
        }
    }
    v[i][j] = -1;
}
int main(){
    int n = 5;
    int startingRow = 0, startingCol = 0;
    vector<vector<int>>v(n,vector<int>(n,-1));
    f(v,n,startingRow,startingCol,0);
}