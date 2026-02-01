#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f(vector<vector<char>>&v,ll r,ll c,ll r2,ll c2,ll count,ll n,ll m){
    ll result = LLONG_MIN;
    if(r==n || c==m || r2==n || c2==m || v[r][c]=='#' || v[r2][c2]=='#')return 0;
    if(r==n-1 && c==m-1){
        if(v[r][c]=='*')count++;
        return count;
    }
    if(r2==n-1 && c2==m-1){
        return count;
    }
    if(v[r][c]=='*')count++;
    if(v[r2][c2]=='*')count++;
    if(r == r2 && c == c2 && v[r][c] == '*')count--;
    result = max(result,f(v,r+1,c,r2+1,c2,count,n,m));
    result = max(result,f(v,r+1,c,r2,c2+1,count,n,m));
    result = max(result,f(v,r,c+1,r2+1,c2,count,n,m));
    result = max(result,f(v,r,c+1,r2,c2+1,count,n,m));
    return result;
}
int main(){
    ll c,r;
    cin>>c>>r;
    vector<vector<char>>v(r,vector<char>(c));
    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++){
            cin>>v[i][j];       
        }
    }
    ll n = v.size();
    ll m = v[0].size();
    cout << f(v,0,0,0,0,0,n,m);

}