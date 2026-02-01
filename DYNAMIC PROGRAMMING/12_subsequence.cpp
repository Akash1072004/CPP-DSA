#include<bits/stdc++.h>
using namespace std;
string f(string &s,string &t,string &ans,int i,int j,string curr){
    if(i==s.size() || j==t.size()){
        if(curr.size()>ans.size())ans = curr;
        return ans;
    }
    if(s[i]==t[j])f(s,t,ans,i+1,j+1,curr+s[i]);
    else {
        if(curr.size()>ans.size())ans = curr;
        f(s,t,ans,i+1,j,curr);
        f(s,t,ans,i,j+1,curr);
    }
    return ans;
}
int main(){
    string s = "abac";
    string t = "cab";
    string ans = "";
    cout<<f(s,t,ans,0,0,"");
}