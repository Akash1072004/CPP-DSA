#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(vector<int>& v1, vector<int>& v2) {
        if(v1[0] < v2[0]) return true;
        else if(v1[0] == v2[0]) {
            return v1[1] > v2[1];
        }
        else return false;
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {

        int n = intervals.size();
        
        sort(intervals.begin(), intervals.end(), cmp);

        int ans = 0;

        int i = 0; 
        while(i < n) {
            int start = intervals[i][0];
            int end = intervals[i][1];

            int j = i+1;
            while(j < n && end >= intervals[j][1]) {
                j++;
            }

            i = j;
            ans++;
        }
        
        return ans;

    }
};

int main() {

}