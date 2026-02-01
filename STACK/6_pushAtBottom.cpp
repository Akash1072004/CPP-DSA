#include<bits/stdc++.h>
using namespace std;
void print(stack<int>&s){
    if(s.size()==0) return;
    int x = s.top();
    s.pop();
    print(s);
    s.push(x);
    cout<<s.top()<<" ";
}
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
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    print(s);
    int v;
    cout<<endl;
    cout<<"which ele you want to push : ";
    cin>>v;
    pushAtBottom(s,v);
    print(s);
}