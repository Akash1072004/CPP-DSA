#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3); 
    q.push(4);
    q.push(5);
    int k;
    cout<<"enter how many you want to reverse : ";
    cin>>k;
    stack<int>st;
    while(k>0){
        st.push(q.front());
        q.pop();
        k--;
    }
    
}