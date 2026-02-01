#include<bits/stdc++.h>
using namespace std;
class MinHeap{
public:
    vector<int>v;
    MinHeap():v(1){}
    int top(){
        return v[1];
    }
    void push(int val){
        if(v.size()==1)v.push_back(val);
        else{
            v.push_back(val);
            int i = v.size()-1;
            while(i!=1){
                int idx = i/2;
                if(v[i]<v[idx]){
                swap(v[i],v[idx]);
                i = idx;
                idx=i/2;
                }
                else break;
            }

        }
    }
    void pop(){
        if(v.size()==1){
            cout<<"PrQueue is empty"<<endl;
            return;
        }
        else {
            int i = 1;
            int idx = v.size()-1;
            swap(v[i],v[idx]);
            int left = 2*i;
            while(left<v.size()){
                left = 2*i;
                int right = left+1;
                if(v[left]<v[right]){
                    if(v[left]<v[i]){
                        swap(v[i],v[left]);
                        i=left;
                    }
                    else break;
                }
                else {
                    if(v[right]<v[i]){
                        swap(v[i],v[right]);
                        i=right;
                    }
                    else break;
                }

            }
            v.pop_back();
        }
    }
    int size(){
        return v.size()-1;
    }

};
int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    cout<<pq.size()<<endl;
    pq.push(11);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    
}