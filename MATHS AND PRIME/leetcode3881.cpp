#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    #define ll long long
    #define MOD 1000000007
    vector<ll> fac;
    ll power(ll a, ll b){
        if(b == 0) return 1;
        if(b == 1) return a;
        ll res = power(a, b/2);
        ll ans = (res*res) % MOD;
        return (b & 1) ? (a * ans) % MOD : ans;
    }
    ll fact(ll n){
        if(n == 0) return 1;
        ll f = 1;
        for(int i = 2; i <= n; i++){
            f =  (f*i) % MOD;
        }
        return f;
    }
    void fact(vector<ll> & fac, int n){
        fac[0] = 1;
        for(int i = 1; i <= n; i++){
            fac[i] = (fac[i-1]*i) % MOD;
        }
    }
    ll ncr(int n, int k){
        if(k < 0 || k > n) return 0;
        ll num = fac[n];
        ll den = (fac[n-k]*fac[k]) % MOD;
        return (num * power(den, MOD-2)) % MOD;
    }
    int countVisiblePeople(int n, int pos, int k) {
        int l = pos;
        int r = n-1-pos;
        if(k == 0) return 2;
        fac.resize(n+1);
        fact(fac, n);
        ll ans = 0;
        for(int i = 0; i <= k; i++){
            ans = (ans + (ncr(l, i) * ncr(r, k-i)) % MOD) % MOD;
        }
        return (ans * 2) % MOD;

        
    }
};
int main(){

}