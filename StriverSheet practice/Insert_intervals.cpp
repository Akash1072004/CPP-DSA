#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        int n = intervals.size();

        if(n == 0) return {{newInterval}};

        vector<vector<int>> ans;

        int i = 0;
        while(i < n) {
            // left portion
            while(i < n && newInterval[0] > intervals[i][1]) {
                ans.push_back(intervals[i]);
                i++;
            }

            // middile portion
            int start = newInterval[0], end = newInterval[1];
            // merge interval
            while(i < n && newInterval[1] >= intervals[i][0]) {
                start = min(start, intervals[i][0]);
                end = max(end, intervals[i][1]);
                i++;
            }
            ans.push_back({start, end});

            // right portion
            while(i < n) {
                ans.push_back(intervals[i]);
                i++;
            }
        }

        return ans;

    }
};
int main() {

}