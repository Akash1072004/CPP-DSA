#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int f(int n, int x ,int clip){ // Recursion DP method ...
    if(n < 0)return 1e9;
    if(n == 0)return 0;
    if(dp[x][clip] != -1)return dp[x][clip];
    int way1 = 2 + f(n-x,2*x,x);
    int way2 = 1 + f(n-clip,x+clip,clip);
    return dp[x][clip] = min(way1,way2);
}
int minSteps(int n) { // very Important Problem ...
    if(n == 1)return 0;
    memset(dp, -1, sizeof dp);
    int ans = f(n-1,1,1); 
    return ans + 1;

}
bool isPrime(int n){
    if(n <= 1)return false;
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0)return false; 
    }
    return true;
}
int highestFactor(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)return (n/i);
    }
    return 1;
}
int fun(int n){ // Maths and Prime Method ...
    int count = 0;
    while(n > 1){
        if(isPrime(n)) {
            count += n;
            break;
        }
        int hf = highestFactor(n);
        count += (n/hf);
        n = hf;
    }
    return count;
}
int main(){
    int n; cin >> n;
    cout << minSteps(n) << endl;
    cout << fun(n);
}
