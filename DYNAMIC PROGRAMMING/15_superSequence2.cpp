#include<bits/stdc++.h>
using namespace std;
string f(string &s, string &t, int i, int j,string ans) {
    if(i == s.size()) return ans + t.substr(j);
    if(j == t.size()) return ans + s.substr(i);

    if(s[i] == t[j]) {
        return f(s, t, i+1, j+1,ans+s[i]);
    } else {
        string a = f(s, t, i+1, j,ans+s[i]);
        string b = f(s, t, i, j+1,ans+t[j]);
        ans = (a.size() < b.size()) ? a : b;
        return ans;
    }
}

int main(){
    string s = "abac";
    string t = "cab";
    cout << f(s,t,0,0,"");
}