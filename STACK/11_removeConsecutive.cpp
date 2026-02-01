#include<bits/stdc++.h>
using namespace std;
void display(stack<char>&st){
    if(st.size()==0)return;
    cout<<st.top()<<" ";
    int x = st.top();
    st.pop();
    display(st);
    st.push(x);
}
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(i==0 || s[i]!=s[i-1])st.push(s[i]);
    }
    display(st);
}