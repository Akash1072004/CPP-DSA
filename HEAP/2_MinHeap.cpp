#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(-1);
    pq.push(25); // in this minimum ele at the top of the heap...
    pq.push(21);
    pq.push(81); // this is min heap...
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}