#include<bits/stdc++.h>
using namespace std;
void print(stack<int>&s){
    if(s.size()==0)return;
    int x = s.top();
    s.pop();
    print(s);
    s.push(x);
    cout<<s.top()<<" ";// print reverse by reursevely...
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    print(s);
}