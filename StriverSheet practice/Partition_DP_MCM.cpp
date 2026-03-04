#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Recursive Apporach
    // int dp[101][101];
    // int f(vector<int>& arr, int i, int j){
    //     if(i == j or i+1 == j) return 0;
    //     if(dp[i][j] != -1) return dp[i][j];
    //     int ans = 1e9;
    //     for(int k = i+1; k < j; k++){
    //         ans = min(ans, arr[i]*arr[k]*arr[j] + f(arr, i, k) + f(arr, k, j));
    //     }
    //     return dp[i][j] = ans;
    // }
    int matrixMultiplication(vector<int> &arr) {
        // code here
        int n = arr.size();
        // memset(dp, -1, sizeof dp);
        // return f(arr, 0, n-1);
        
        // Tabulation Approach

        int dp[n][n];
        for(int i = 0; i < n; i++) dp[i][i] = 0;
        for(int i = n-1; i >= 1; i--){
            for(int j = i+1; j < n; j++){
                int ans = 1e9;
                for(int k = i; k < j; k++){
                    ans = min(ans, arr[i-1]*arr[k]*arr[j] + dp[i][k] + dp[k+1][j]);
                }
                dp[i][j] = ans;
            }
        }
        return dp[1][n-1];
        
        
    }
};
int main(){

}