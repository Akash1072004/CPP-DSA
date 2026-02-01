#include<bits/stdc++.h>
using namespace std;
bool bottomUp(int n,int k,int l){
    vector<bool>dp(1000005);
    dp[1]=1;
    dp[k]=1;
    dp[l]=1;
    for(int i=2;i<=1000000;i++){
        dp[i]=!(dp[i-1] && (i-k)>=1 ? dp[i-k] : 1 && (i-l)>=1 ? dp[i-l] : 1);
    }
    return dp[n];
}
bool mCoins2(int n,int k,int l,vector<int>&dp){
    if(n==1 || n==k || n==l)return true;
    if(dp[n]!=-2)return dp[n];
    dp[n] = !mCoins2(n-1,k,l,dp) || !mCoins2(n-k,k,l,dp) || !mCoins2(n-l,k,l,dp);
    return dp[n];
} 
// bool mCoins(int n,int k,int l,vector<int>&dp){
//     if(n==0)return false;
//     if(n<=0)return false;
//     if(dp[n]!=-2)return dp[n];
//     dp[n] = !mCoins(n-1,k,l,dp) || !mCoins(n-k,k,l,dp) || !mCoins(n-l,k,l,dp);
//     return dp[n];
// }
int main(){
    int n = 12;
    int k = 2;
    int l = 3;
    vector<int>dp(n+1,-2);
    bool flag = mCoins2(n,k,l,dp);
    if(flag==true)cout<<"A";
    else cout<<"B"; 
    cout<<endl;
    bool check = bottomUp(n,k,l);
    if(check==true)cout<<"A";
    else cout<<"B";
}