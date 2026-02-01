#include<bits/stdc++.h>
using namespace std;
int task(int val1,int val2, char ch){
    if(ch=='+')return val1+val2;
    if(ch=='-')return val1-val2;
    if(ch=='*')return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "-/*+79483"; 
    stack<int>val;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>=48 && s[i]<=57)val.push(s[i]-48);
        else {
            int val1 = val.top();
            val.pop();
            int val2 = val.top();
            val.pop();
            char ch = s[i];
            int ans = task(val1,val2,ch);
            val.push(ans);
        }
    }
    cout<<val.top();
}