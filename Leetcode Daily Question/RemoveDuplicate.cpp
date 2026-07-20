#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string smallestSubsequence(string s) {
        
        int n = s.size();
        vector<int> count(26, 0);
        vector<int> used(26, 0);
        for(int i = 0; i < n; i++) {
            count[s[i]-'a']++;
        }   

        string ans = "";

        for(int i = 0; i < n; i++) {
            if(used[s[i]-'a']) { // Do not use Duplicate 
                count[s[i]-'a']--;
                continue; 
            }
            if(ans == "") {
                ans += s[i];
                count[s[i]-'a']--;
                used[s[i]-'a'] = 1;
            }
            else if(s[i] < ans.back()) {
                while(!ans.empty() && s[i] < ans.back() && count[ans.back()-'a']) {
                    used[ans.back()-'a'] = 0;
                    ans.pop_back();
                }
                ans += s[i];
                count[s[i]-'a']--;
                used[s[i]-'a'] = 1;
            }
            else {
                ans += s[i];
                count[s[i]-'a']--;
                used[s[i]-'a'] = 1;
            }
        }

        return ans;

    }
};
int main() {

}