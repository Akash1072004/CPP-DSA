#include<bits/stdc++.h>
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
}
void removeEven(queue<int>&q){
    int i=0;
    int x = q.size();
    while(x>0){
        int y = q.front();
        q.pop();
        if(i%2!=0)q.push(y);
        x--;
        i++;
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    removeEven(q);
    cout<<endl;
    display(q);
}