#include<iostream>
#include<deque>//imp...
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    dq.push_front(40);
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    dq.pop_back();
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    dq.pop_front();
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
}