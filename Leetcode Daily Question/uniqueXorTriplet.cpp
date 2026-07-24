#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        
        int n = nums.size();

        int maxEle = *max_element(nums.begin(), nums.end());
        int limit = 1;
        while (limit <= maxEle) {
            limit <<= 1;
        }

        vector<bool> v(limit, false);

        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                v[nums[i]^ nums[j]] = true;
            }
        }

        vector<bool> triplet(limit, false);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < v.size(); j++) {
                if(v[j]) {
                    triplet[nums[i]^ j] = true;
                }
            }
        }

        int count = 0;
        for(int i = 0; i < triplet.size(); i++) {
            if(triplet[i]) count++;
        }

        return count;

    }
};
int main() {

}