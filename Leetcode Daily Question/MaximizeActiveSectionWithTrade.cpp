#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        
        int n = s.size();
        vector<int> leftZero(n, 0);
        vector<int> rightZero(n, 0);
        leftZero[0] = 0;
        rightZero[n-1] = 0;
        int one = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') one++;
        }
        int count = 0;
        if(s[0] == '0') count++;
        for(int i = 1; i < n; i++) {
            if(s[i] == '0') count++;
            else leftZero[i] = count;
            if(i+1 < n && s[i] == '1' && s[i+1] == '0') count = 0;
        }
        count = 0;
        if(s[n-1] == '0') count++;
        for(int i = n-2; i >= 0; i--) {
            if(s[i] == '0') count++;
            else rightZero[i] = count;
            if(i-1 >= 0 && s[i] == '1' && s[i-1] == '0') count = 0;
        }

        int ans = one;
        for(int i = 0; i < n; i++) {
            if(leftZero[i] > 0 && rightZero[i] > 0) {
                ans = max(ans, one+leftZero[i]+rightZero[i]);
            }
        }

        return ans;

    }
};
int main() {

}