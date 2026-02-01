#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={6,5,3,2,8,10,9};
    int k = 3;
    int x = v.size();
    // vector<int>ans(x);// no extra space used and also sort by using heap...
    int a = 0;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<x;i++){
        pq.push(v[i]);
        if(pq.size()>k){
            v[a++]=pq.top();
            pq.pop();
        }
    }
    while(pq.size()>0){
        v[a++]=pq.top();
        pq.pop();
    }
    for(int i=0;i<x;i++){
       cout<<v[i]<<" ";
    }
}