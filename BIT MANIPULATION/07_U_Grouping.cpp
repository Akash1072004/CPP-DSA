#include <bits/stdc++.h>
using namespace std;
int f(vector<vector<int>>&v, int mask){
    // this question is in Queue so it is taken after some time so i am aheading from this question till now then after i wil come here to solve it ...
}
int main(){
    int n; cin >> n;
    vector<vector<int>>v(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }
    cout << f(v, (1 << n) - 1);
}