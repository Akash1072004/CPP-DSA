#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
#define MOD 1000000007
    int dp[201][201][2];
    // This Approach is best than pervous in which i put 0 and 1 by checking limit
    int f(int &zero, int &one, int z, int o, int preVal, int &limit){
        if(z > zero || o > one) return 0; 
        if(z == zero && o == one) return 1;
        if(z == zero) return (one - o <= limit) ?  1 : 0; 
        if(o == one) return (zero - z <= limit) ?  1 : 0;
        if(dp[z][o][preVal] != -1) return dp[z][o][preVal];
        int ans = 0; 
        if(preVal == 1){
            for(int i = 1; i <= limit; i++){
                // how many zero i can put 
                ans = (ans % MOD + f(zero, one, z + i, o, 0, limit) % MOD) % MOD;
            }
        }
        else {
            for(int i = 1; i <= limit; i++){
                // how many one i can put 
                ans = (ans % MOD + f(zero, one, z, o + i, 1, limit) % MOD) % MOD;
            }
        }
        return dp[z][o][preVal] = ans;
    }
    int numberOfStableArrays(int zero, int one, int limit) {
        long long ans = 0;
        memset(dp, -1, sizeof dp);
        for(int i = 1; i <= limit; i++){
            ans = (ans % MOD + f(zero, one, i, 0, 0, limit) % MOD) % MOD;
        }
        for(int i = 1; i <= limit; i++){
            ans = (ans % MOD + f(zero, one, 0, i, 1, limit) % MOD) % MOD;
        }
        return ans;



    }
};
int main(){

}