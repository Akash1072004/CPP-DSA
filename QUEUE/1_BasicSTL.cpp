#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl; // print 1st ele...
    cout<<q.back()<<endl;// print last...
    cout<<q.empty()<<endl; // it returns true if queue is empty else return false...
}