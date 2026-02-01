#include<bits/stdc++.h>
using namespace std;
void display(queue<int>&q){
    int size = q.size();
    while(size>0){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
        size--;
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2); 
    q.push(3);
    q.push(4);    
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    stack<int>st;
    int s = q.size();
    int a = s/2;
    int b = a;
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(a>0){
        q.push(st.top());
        st.pop();
        a--;
    }
    display(q);
    while(b>0){
        q.push(q.front());
        q.pop();
        q.push(st.top());
        st.pop();
        b--;
    }
    display(q);
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    display(q);
}