#include<bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int ans = 0;

    int f(string &s, string &t, int i, int j, int count){
        if(i == s.size() or j == t.size()){
            ans = max(ans, count);
            return count;
        }

        if(s[i] == t[j]){
            ans = max(ans, count+1);
            return f(s,t,i+1,j+1,count+1);
        }

        ans = max(ans, count);
        f(s,t,i+1,j,0);
        f(s,t,i,j+1,0);

        return ans;
    }

    int longestCommonSubstr (string str1, string str2){
        ans = 0;    // this is very important concept for me that i have to reset this for further calls 
        f(str1, str2, 0, 0, 0);
        return ans;
    }
};
int main(){

}