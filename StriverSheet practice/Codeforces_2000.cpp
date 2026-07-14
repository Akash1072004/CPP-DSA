#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int MOD = 1e9+7;
const ll INF = 1e18;

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

// Codeforces 2000 Rated

ll dp[301][301][301];

ll f(vector<vector<ll>>& v, int i, int j, int a, int n) {
    int b = i+j-a; // For both the coordinate should be lie in the diagonal (i+j = a+b)
    if(i >= n || a >= n || j >= n || b >= n) return -1e9;
    if(i == n-1 && j == n-1) return v[i][j];
    if(dp[i][j][a] != -1) return dp[i][j][a];
    ll ans = -1e9;
    ll temp = v[i][j];
    if(i != a || j != b) {
        temp += v[a][b];
    }
    ans = max(ans, temp+f(v, i+1, j, a+1, n));
    ans = max(ans, temp+f(v, i+1, j, a, n));
    ans = max(ans, temp+f(v, i, j+1, a+1, n));
    ans = max(ans, temp+f(v, i, j+1, a, n));
    return dp[i][j][a] = ans;
}
void solve() {
    ll n; cin >> n;
    vector<vector<ll>> v(n, vector<ll> (n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    memset(dp, -1, sizeof dp);
    cout << f(v, 0, 0, 0, n) << endl;
}

int main() {
    fastIO();

    int t = 1; 
    // cin >> t;
    while(t--){ 
        solve();
    }

    return 0;
}