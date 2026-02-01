#include<bits/stdc++.h>
using namespace std;
void pushAtIdx(stack<int>&s,int idx,int v){
    stack<int>temp;
    for(int i=0;i<idx;i++){
        temp.push(s.top());
        s.pop();
    }
    s.push(v);
    while(temp.size()>0){
        s.push(temp.top());
        temp.pop();
    }
    while(s.size()>0){
        cout<<s.top()<<endl;
        s.pop();
    }
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    int idx;
    cout<<"At which idx you want to insert : ";
    cin>>idx;
    int v;
    cout<<"which element you want ti insert : ";
    cin>>v;
    pushAtIdx(s,idx,v);
}
