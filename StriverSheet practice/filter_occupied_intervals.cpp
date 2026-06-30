#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(vector<int>& v1, vector<int>& v2) {
        return v1[0] < v2[0];
    }
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        
        int n = occupiedIntervals.size();

        sort(occupiedIntervals.begin(), occupiedIntervals.end(), cmp);
        int i = 0;
        vector<vector<int>> mergeIntervals;
        while(i < n) {
            int start = occupiedIntervals[i][0];
            int end = occupiedIntervals[i][1];

            while(i+1 < n && end >= occupiedIntervals[i+1][0]-1) { // check with next start
                end = max(end, occupiedIntervals[i+1][1]);
                i++;
            }

            mergeIntervals.push_back({start, end});
            i++;
        }

        vector<vector<int>> ans;

        // now remove the integer points from mergeIntervals which is of free intervals

        i = 0;
        int m = mergeIntervals.size();
        while(i < m) {
            // left portion
            while(i < m && mergeIntervals[i][1] < freeStart) {
                ans.push_back({mergeIntervals[i][0], mergeIntervals[i][1]});
                i++;
            }

            if(i < m && mergeIntervals[i][0] < freeStart) {
                ans.push_back({mergeIntervals[i][0], freeStart-1});
            }

            while(i < m && freeEnd >= mergeIntervals[i][1]) i++;

            if(i < m && freeEnd < mergeIntervals[i][1]) {
                if(mergeIntervals[i][0] <= freeEnd) ans.push_back({freeEnd+1, mergeIntervals[i][1]});
                else ans.push_back(mergeIntervals[i]);
                i++;
            }

            while(i < m) {
                ans.push_back({mergeIntervals[i][0], mergeIntervals[i][1]});
                i++;
            }
                
        }

        return ans;

    }
};
int main() {

}