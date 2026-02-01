#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<string>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')st.push("(");
        else if(st.size()==0 && s[i]==')'){
            cout<<"false";
            break;
        }
        else st.pop();

    }
    if(st.size()==0)cout<<"true";
    else cout<<"false";
}