#include<bits/stdc++.h>
using namespace std;
int task(int val1,int val2, char ch){
    if(ch=='+')return val1+val2;
    if(ch=='-')return val1-val2;
    if(ch=='*')return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "79+4*8/3-"; //this is Postfix expression...
    stack<int>val;
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57)val.push(s[i]-48);
        else {
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            char ch = s[i];
            int ans = task(val1,val2,ch);
            val.push(ans);
        }
    }
    cout<<val.top();
}