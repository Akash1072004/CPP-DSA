#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(-1);
    pq.push(25); // pritorty  queue is same as stack but the max ele is in the top of the queue...
    pq.push(21);
    pq.push(81); // this is max heap...
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}