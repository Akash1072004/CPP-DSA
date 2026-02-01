#include<bits/stdc++.h>
using namespace std;
string shortestCommonSupersequence(string s1, string s2) {
        int n = s1.size();
        int m = s2.size(); // Tablualtion apporach...
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(s1[i]==s2[j])dp[i][j] = 1+dp[i+1][j+1];
                else {
                    dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }
        string ans = "";
        int i=0,j=0;
        while(i<=n-1 && j<=m-1){
            if (s1[i]==s2[j]){
                ans += s1[i];
                i++,j++;
            }
            else if (dp[i+1][j]>dp[i][j+1])ans+=s1[i++];
            else ans+=s2[j++];
        }
        ans += s1.substr(i) + s2.substr(j);
        return ans;
}
int main(){
    string s1 = "abde";
    string s2 = "cab";
    cout << shortestCommonSupersequence(s1,s2);
}