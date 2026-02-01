#include<bits/stdc++.h>
using namespace std;
string f(string &s,string &t,int i,int j,string ans){
    if(i==s.size() || j==t.size())return ans;
    if(s[i]==t[j])return f(s,t,i+1,j+1,ans+s[i]);
    else {
        string a = f(s,t,i+1,j,ans);
        string b = f(s,t,i,j+1,ans);
        return a.size()>b.size() ? a : b;
    }
}
int main(){
    string s = "abac";
    string t = "cab";
    cout<<f(s,t,0,0,"")<<endl;
    string ans = s+t;
    cout<<ans<<endl;
}