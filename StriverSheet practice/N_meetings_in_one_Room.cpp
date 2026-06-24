#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    static bool cmp(vector<int>& v1, vector<int>& v2) {
        if(v1[1] == v2[1]) return v1[0] < v2[0];
        return v1[1] < v2[1];

    }
    vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
        // code here
        
        int n = s.size();
        vector<vector<int>> schedular(n, vector<int> (3));
        
        for(int i = 0; i < n; i++) {
            schedular[i][0] = s[i];
            schedular[i][1] = f[i];
            schedular[i][2] = i+1;
        }
        
        sort(schedular.begin(), schedular.end(), cmp);
        
        vector<int> totalMeetings;
        
        int freeTime = -1;
        
        for(int i = 0; i < n; i++) {
            if(freeTime < schedular[i][0]) {
                totalMeetings.push_back(schedular[i][2]); 
                freeTime = schedular[i][1]; // Free time
            }
        }
        
        sort(totalMeetings.begin(), totalMeetings.end());
        return totalMeetings;
        
    }
};
int main() {

}