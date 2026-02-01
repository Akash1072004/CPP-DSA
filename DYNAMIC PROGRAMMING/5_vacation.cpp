#include<bits/stdc++.h>
using namespace std;
int vacation(int n,vector<vector<int>>&v,int i,int a,vector<vector<int>>&dp){
    if(i==v.size() || n==0)return 0;
    if(dp[n][a+1]!=-1)return dp[n][a+1];
    int m = INT_MIN;
    for(int j=0;j<v[i].size();j++){
        if(j==a)continue;
        m = max(m,v[i][j]+vacation(n-1,v,i+1,j,dp));
    }
    dp[n][a+1] = m;
    return dp[n][a+1];
}
int main(){
    int n = 3;
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    vector<vector<int>>v={{10,40,70},{20,50,80},{30,60,90}};
    cout<< vacation(n,v,0,-1,dp);
}