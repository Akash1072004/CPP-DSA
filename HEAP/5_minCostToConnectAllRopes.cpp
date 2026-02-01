#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,7,4,1,8};
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<v.size();i++){
        pq.push(v[i]);
    }
    int sum = 0; // by taking minHeap we will have min cost...
    while(pq.size()>1){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        sum+=(a+b);
        cout<<sum<<" ";
        pq.push(a+b);
    }
    cout<<endl<<"final sum is "<<sum;
    
}