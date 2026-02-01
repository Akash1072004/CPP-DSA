#include<bits/stdc++.h>
using namespace std;
void displayRev(queue<int>&q,stack<int>&st){
    while(q.size()>0){
        st.push(q.front()); // print queue in reverse order...
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    int x = q.size();
    while(x>0){
        cout<<q.front()<<" ";
        int y = q.front();
        q.pop();
        q.push(y);
        x--;
    }
    
}
int main(){
    queue<int>q;
    stack<int>st;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    displayRev(q,st);
}