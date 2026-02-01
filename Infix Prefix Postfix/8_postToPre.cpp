#include<bits/stdc++.h>
using namespace std;
string task(string val1,string val2, char ch){
    return ch+val1+val2;
}
int main(){
    string s = "79+4*8/3-"; 
    stack<string>val;
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57)val.push(to_string(s[i]-48));
        else {
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            char ch = s[i];
            string ans = task(val1,val2,ch);
            val.push(ans);
        }
    }
    cout<<val.top();
}