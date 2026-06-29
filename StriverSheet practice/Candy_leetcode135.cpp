#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int candy(vector<int>& ratings) {
        
        // space optimization approach (Slope Method)

        int minCandy = 1;

        int n = ratings.size();
        int i = 1;
        while(i < n) {
            if(ratings[i] == ratings[i-1]) {
                minCandy += 1;
                i++;
                continue;
            }
            int peak = 1;
            while(i < n && ratings[i] > ratings[i-1]) {
                peak++;
                minCandy += peak;
                i++;
            }
            int down = 1;
            while(i < n && ratings[i] < ratings[i-1]) {
                minCandy += down++;
                i++;
            }

            if(down > peak) minCandy += (down-peak);

        }
        return minCandy;

    }
};
int main() {

}