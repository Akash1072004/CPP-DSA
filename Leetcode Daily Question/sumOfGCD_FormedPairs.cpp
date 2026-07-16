#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    #define ll long long
    long long gcdSum(vector<int>& nums) {
        
        int n = nums.size();

        vector<ll> maxi(n, 0);
        maxi[0] = nums[0];
        for(int i = 1; i < n; i++) {
            maxi[i] = max(maxi[i-1], (ll)nums[i]);
        }

        vector<ll> PrefixGcd(n, 0);
        for(int i = 0; i < n; i++) {
            PrefixGcd[i] = __gcd((ll)nums[i], maxi[i]);
        }
        sort(PrefixGcd.begin(), PrefixGcd.end());

        int i = 0, j = n-1;
        ll sum = 0;
        while(i < j) {
            ll Gcd = __gcd(PrefixGcd[i], PrefixGcd[j]);
            sum += Gcd;
            i++; j--;
        }

        return sum;

    }
};
int main() {

}