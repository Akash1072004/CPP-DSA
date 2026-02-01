#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[105][105][105]; // this is same as previous but here use DP so change some Approach...

ll f(vector<vector<char>>&v,ll r,ll c,ll r2,ll n,ll m){
    ll c2 = r + c - r2;

    if(r>=n || c>=m || r2>=n || c2>=m) return LLONG_MIN;
    if(v[r][c]=='#' || v[r2][c2]=='#') return LLONG_MIN;

    if(dp[r][c][r2] != -1)
        return dp[r][c][r2];

    ll gain = 0;
    if(v[r][c]=='*') gain++;
    if(v[r2][c2]=='*') gain++;
    if(r==r2 && c==c2 && v[r][c]=='*') gain--;

    if(r==n-1 && c==m-1)
        return dp[r][c][r2] = gain;

    ll best = f(v,r+1,c, r2+1, n,m);
    best = max(best, f(v,r+1,c, r2,   n,m));
    best = max(best, f(v,r,c+1, r2+1, n,m));
    best = max(best, f(v,r,c+1, r2,   n,m));

    if(best == LLONG_MIN)
        return dp[r][c][r2] = LLONG_MIN;

    return dp[r][c][r2] = gain + best;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll c,r;
        cin>>c>>r;
        vector<vector<char>>v(r,vector<char>(c));
        for(ll i=0;i<r;i++){
            for(ll j=0;j<c;j++){
                cin>>v[i][j];
            }
        }
        memset(dp,-1,sizeof dp);
        cout << max(0LL, f(v,0,0,0,r,c)) << " ";
    }
}
