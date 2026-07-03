#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int n = piles.size();
        int low = 1, high = 1e9;

        int ans = 0;
        while(low <= high) {
            int mid = low + (high-low)/2;

            long long time = 0;
            int k = mid;
            for(int i = 0; i < n; i++) {
                time += (piles[i]+k-1)/k;
            }
            if(time <= h) {
                high = mid-1;
                ans = mid;
            }
            else low = mid+1;
        }

        return ans;
        
    }
};
int main() {

}