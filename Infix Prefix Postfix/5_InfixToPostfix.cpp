#include<bits/stdc++.h>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-')return 1;
    else return 2;
}
string task(string val1,string val2,char optr){
    return val1+val2+optr;
}
int main(){
    string s = "(7+9)*4/8-3";
    stack<string>val;
    stack<char>op;
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57) val.push(string(1,s[i]));

        else{
            if(op.size()==0)op.push(s[i]);
            else if(s[i]=='(')op.push(s[i]);
            else if(op.top()=='(')op.push(s[i]);
            else if(s[i]==')'){
                //work...
                while(op.top()!='('){
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    char optr = op.top();
                    op.pop();
                    string ans = task(val1,val2,optr);
                    val.push(ans);
                }
                op.pop();
            }
            else if(prio(s[i])>prio(op.top()))op.push(s[i]);
            else {
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    char optr = op.top();
                    op.pop();
                    string ans = task(val1,val2,optr);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()!=0){
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        char optr = op.top();
        op.pop();
        string ans = task(val1,val2,optr);
        val.push(ans);
    }
    cout<<val.top();
}