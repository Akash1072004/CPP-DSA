#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>&q){
    int x = q.size();
    while(x>0){
        cout<<q.front()<<" ";
        int y = q.front();
        q.pop();
        q.push(y);
        x--;
    }
    cout<<endl<<q.size();
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
}