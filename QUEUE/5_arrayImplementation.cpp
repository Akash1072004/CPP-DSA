#include<bits/stdc++.h>
using namespace std;
class Queue{
public:
    int f;
    int b;
    vector<int>v;
    Queue():f(0),b(0){}
    void push(int val){
        v.push_back(val);
        b++;
    }
    void pop(){
        if(b-f==0){
            cout<<"queue is empty";
            return;
        }
        else f++;
    }
    int front(){
        if(b-f==0){
            cout<<"queue is empty";
            return -1;
        }
        return v[f];
    }
    int back(){
        if(b-f==0){
            cout<<"queue is empty";
            return -1;
        }
        return v[b-1];
    }
    int size(){
        return b-f;
    }
    bool empty(){
        if(v.size()==0)return true;
        else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl; 
    cout<<q.empty()<<endl;
    cout<<q.back()<<endl;

}