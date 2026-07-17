#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    #define ll long long 
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());

        unordered_map<int, int> mp; // store the freq of all elements 
        for(int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        vector<ll> numOfDivisors(maxi+1, 0); // count the number of elements that are divisible by i-th number

        for (int i = 1; i <= maxi; i++) {
            for (int j = i; j <= maxi; j += i) {
                numOfDivisors[i] += mp[j];
            }
        }

        vector<ll> gcdPair(maxi+1, 0); // Number of elements in the array with GCD i 

        for(int i = maxi; i >= 1; i--) {
            ll count = numOfDivisors[i];

            // find the pair by calculating nC2
            ll numOfPairs = (count >= 2) ? ((count* (count-1))/2) : 0;

            gcdPair[i] = numOfPairs;

            // remove the repeated count of divisors
            for (int j = 2*i; j <= maxi; j += i) { 
                gcdPair[i] -= gcdPair[j];
            }
        }

        vector<ll> prefix(maxi+1, 0);

        for(int i = 1; i <= maxi; i++) {
            prefix[i] = prefix[i-1] + gcdPair[i];
        }

        vector<int> result;

        for(ll q : queries) {
            int g = lower_bound(prefix.begin(), prefix.end(), q+1) - prefix.begin();
            result.push_back(g);
        }

        return result;

    }
};
int main() {

}