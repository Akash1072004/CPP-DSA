#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={10,20,-4,5,18,24,1,-7,56};
    int k = 4;
    int x = v.size();
    priority_queue<int>pq;
    for(int i=0;i<x;i++){
        pq.push(v[i]);
        if(pq.size()>k)pq.pop();
    }
    cout<<"kth smallest number is "<<pq.top();
}