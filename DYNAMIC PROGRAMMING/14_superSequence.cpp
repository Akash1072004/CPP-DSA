#include<bits/stdc++.h>
using namespace std;
int f(string &s,string &t,int i,int j,int n){
    if(i==s.size() || j==t.size())return n;
    if(s[i]==t[j])return f(s,t,i+1,j+1,n-1);
    else return min(f(s,t,i+1,j,n),f(s,t,i,j+1,n));
}
int main(){
    string s = "abac";
    string t = "ba";
    int n = s.size()+t.size();
    cout << f(s,t,0,0,n);
}