#include <bits/stdc++.h>
using namespace std;
vector<long long int> factorial(int n){
    vector<long long int>ans(26);
    int MOD = 1000000007;
    ans[0] = 1;
    ans[1] = 1;
    for(int i = 2; i < ans.size(); i++){ // finding the factorial upto 25 by taking mod with 10^9 + 7 ...
        ans[i] =  ((i % MOD) * (ans[i-1] % MOD)) % MOD;
    }
    return ans;
}
int main(){
    vector<long long int>res = factorial(25);
    for(int i = 0; i < res.size(); i++){
        cout << i << "! = " << res[i] << endl;
    }
}