#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int n;
    int dp[1001][1001];
    int f(vector<int>& val, vector<int>& wt, int capacity, int i){
        if(capacity < 0) return -1e9;
        if(i == n) return 0;
        if(dp[i][capacity] != -1) return dp[i][capacity];
        int take = val[i]+f(val, wt, capacity-wt[i], i);
        int notTake = f(val, wt, capacity, i+1);
        return dp[i][capacity] = max(take, notTake);
    }
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        n = val.size();
        memset(dp, -1, sizeof dp);
        return f(val, wt, capacity, 0);
        
        
    }
};
int main(){

}