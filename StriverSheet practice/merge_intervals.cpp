#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool cmp(vector<int>& v1, vector<int>& v2) {
        return v1[0] < v2[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int n = intervals.size();

        vector<vector<int>> ans;

        sort(intervals.begin(), intervals.end(), cmp);

        int i = 0;

        while(i < n) {
            int start = intervals[i][0], end = intervals[i][1];
            while(i+1 < n && end >= intervals[i+1][0]) {
                i++;
                end = max(end, intervals[i][1]);
            }
            ans.push_back({start, end});
            i++;
        }

        return ans;

    }
};
int main() {

}