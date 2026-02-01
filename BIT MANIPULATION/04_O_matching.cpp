#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int dp[22][1<<22];
int f(vector<vector<int>>&v, int mask, int n, int i){
    if(i == n) {
        if(mask == 0)return 1;
        else return 0;
    }
    if(dp[i][mask] != -1) return dp[i][mask];
    int ans = 0;
    for(int w = 0; w < n; w++){
        if(v[i][w] and ((1 << w) & mask) != 0){
            mask = (mask & ~(1 << w)); //  also can do = (mask ^ (1 << w)) ...
            ans = ((ans % MOD) + f(v,mask,n,i+1) % MOD) % MOD;
            mask = (mask | (1 << w));
        }
    }
    return dp[i][mask] = ans;
}
int main(){
    int n; cin >> n;
    vector<vector<int>>v(n,vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }
    memset(dp, -1, sizeof dp);
    cout << f(v,(1 << n) - 1,n,0);
}