#include<bits/stdc++.h>
using namespace std;
string task(string val1,string val2, char ch){
    return val1+ch+val2;
}
int main(){
    string s = "-/*+79483"; // prefix to Infix...
    stack<string>val;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>=48 && s[i]<=57)val.push(to_string(s[i]-48));
        else {
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            char ch = s[i];
            string ans = task(val1,val2,ch);
            val.push(ans);
        }
    }
    cout<<val.top();
}