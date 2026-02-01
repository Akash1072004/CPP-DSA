#include<bits/stdc++.h>
using namespace std;
int BottomUp(int n,vector<int>&dp){
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(int i=4;i<=n;i++){
        dp[i]=1+min({dp[i-1],(i%2==0)?dp[i/2]:INT_MAX,(i%3==0)?dp[i/3]:INT_MAX});
    }
    return dp[n];
}
int minStep(int n,vector<int>&dp){
    if(n==1)return 0;
    if(n==2)return 1; // this is the top down approach of this dp problem...
    if(n==3)return 1;
    if(dp[n]!=-1)return dp[n];
    dp[n] = 1+min({minStep(n-1,dp),(n%2==0)?minStep(n/2,dp):INT_MAX,(n%3==0)?minStep(n/3,dp):INT_MAX});
    return dp[n];
}
int main(){
    int n = 15;
    vector<int>dp(n+1,-1);
    cout<<minStep(n,dp)<<endl;
    cout<<BottomUp(n,dp);
}