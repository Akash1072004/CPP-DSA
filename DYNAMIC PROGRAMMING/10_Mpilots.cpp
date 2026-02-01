#include <iostream>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>   
using namespace std;
long long dp[5005][5005];
long long f(vector<vector<int>>&v,int i,int c,int a){
    if(i==v.size())return 0;
    if(dp[c][a]!=-1)return dp[c][a];
    if(c==a)return dp[c][a] = v[i][1]+f(v,i+1,c,a+1);
    if(c==(v.size()/2))return dp[c][a] = v[i][1]+f(v,i+1,c,a+1);
    if(a==(v.size()/2))return dp[c][a] = v[i][0]+f(v,i+1,c+1,a);
    
    return dp[c][a] = min(v[i][0]+f(v,i+1,c+1,a),v[i][1]+f(v,i+1,c,a+1));
}
int main(){
    memset(dp,-1,sizeof dp);
    int x;
    cin>>x;
    vector<vector<int>>v(x,vector<int>(2));
    for(int i=0;i<v.size();i++){
        for(int j=0;j<2;j++){
            cin>>v[i][j];
        }
    }
    cout<<f(v,0,0,0);
}