#include<bits/stdc++.h>
using namespace std;
int removeDigit(int n,vector<int>&dp){
    if(n==0)return 0;
    if(n==1)return 1;
    if(dp[n]!=-1)return dp[n];
    int a = n;
    int m =INT_MAX; // This is recursive approach...
    while(a>0){
       if(a%10!=0) m = min(m,removeDigit(n-(a%10),dp)+1);
        a/=10;
    }
    dp[n]=m;
    return dp[n];
}
int BottomUp(int n){
    vector<int>dp(n+1,INT_MAX); // This is bottom up approach...
    int a = 0;
    dp[0]=0;
    int m =0;
    for(int i=1;i<=n;i++){
        m =INT_MAX;
        a=i;
        while(a>0){
        if(a%10!=0) m = min(m,dp[i-(a%10)]+1);
        a/=10;
        }
        dp[i]=m;
    }
     return dp[n];
}
int main(){
    int n = 27;
    vector<int>dp(n+1,-1);
    cout<<removeDigit(n,dp)<<endl;
    cout<<BottomUp(n);
}