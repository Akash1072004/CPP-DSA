#include<bits/stdc++.h>
using namespace std;
void pushAtBottom(stack<int>&s,int v){
    if(s.size()==0){
        s.push(v);
        return;
    }
    int x = s.top();
    s.pop();
    pushAtBottom(s,v);
    s.push(x);
    
}
void rec(stack<int>&s){
    if(s.size()==0)return;
    int x = s.top();
    s.pop();
    rec(s);
    pushAtBottom(s,x);
}
void display(stack<int>&s){
    if(s.size()==0)return;
    cout<<s.top()<<" ";
    int x = s.top();
    s.pop();
    display(s);
    s.push(x);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    display(s);
    cout<<endl;
    rec(s);   
    cout<<endl;
    display(s);
}