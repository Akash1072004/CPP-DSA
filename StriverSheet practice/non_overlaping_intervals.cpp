#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool cmp(vector<int>& v1, vector<int>& v2) {
        if(v1[0] < v2[0]) return true;
        else if(v1[0] == v2[0]) {
            return v1[1] < v2[1];
        }
        else return false;
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(), cmp);

        int n = intervals.size();

        int i = 0;
        int minIntervalRemove = 0;
        while(i < n) {
            int start = intervals[i][0];
            int end = intervals[i][1];
            int a = i+1;
            while(a < n && end > intervals[a][0]) {
                minIntervalRemove++;
                end = min(end, intervals[a][1]);
                a++;
            }

            i = a;
        }

        return minIntervalRemove;

    }
};
int main() {

}