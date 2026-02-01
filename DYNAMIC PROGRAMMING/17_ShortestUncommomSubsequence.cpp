#include<bits/stdc++.h>
using namespace std;

int INF = 1e9; // very important problem...

int f(string &s, string &t, int i, int j) {
    if (i == s.size()) return INF;
    if (j == t.size()) return 1;

    int notTake = f(s, t, i+1, j);

    int k = j;
    while (k < t.size() && t[k] != s[i]) k++;

    int take;
    if (k == t.size())
        take = 1;
    else
        take = 1 + f(s, t, i+1, k+1);

    return min(take, notTake);
}

int main() {
    string s = "babab";
    string t = "babba";
    int ans = f(s, t, 0, 0);
    cout << (ans >= INF ? -1 : ans);
}
