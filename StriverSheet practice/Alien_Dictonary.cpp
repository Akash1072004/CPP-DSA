#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string findOrder(vector<string> &words) {
        // code here
        int n = words.size();
        
        unordered_set<int> s;
        for(int i = 0; i < n; i++) {
            for(auto ele : words[i]) {
                s.insert(ele-'a');
            }
        }
        
        // int k = s.size();
        
        vector<int> graph[26];
        
        for(int i = 1; i < n; i++) {
            string s1 = words[i-1];
            string s2 = words[i];
            int len = min(s1.size(), s2.size());
            bool flag = false;
            for(int j = 0; j < len; j++) {
                if(s1[j] != s2[j]) {
                    graph[s1[j]-'a'].push_back(s2[j]-'a');
                    flag = true;
                    break;
                }
            }
            if(!flag && s1.size() > s2.size()) return "";
        }
        
        vector<int> indegree(26, 0);
        
        for(int i = 0; i < 26; i++) {
            for(auto ele : graph[i]) {
                indegree[ele]++;
            }
        }
        
        string ans = "";
        queue<int> q;
        
        for(int i = 0; i < 26; i++){
            if(indegree[i] == 0 && s.count(i)) {
                q.push(i);
            }
        }
        
        // for(auto ele : s) {
        //     if(indegree[ele] == 0) {
        //         q.push(ele);
        //     }
        // }
        
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            ans += (node+'a');
            for(auto ele : graph[node]) {
                indegree[ele]--;
                if(indegree[ele] == 0) q.push(ele);
            }
        }
        
        if(ans.size() != s.size()) return "";
        
        return ans;
        
        
        
    }
};
int main() {

}