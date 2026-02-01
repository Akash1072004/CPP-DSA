#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int idx;
    int arr[5];
    Stack():idx(-1){}
    void push(int v){ // fake stack by oops...
        if(idx==4){
            cout<<"arr is full";
            return;
        }
        idx++;
        arr[idx]=v;
    }
    void pop(){
        if(idx==-1){
            cout<<"arr is empty";
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"arr is empty";
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);// size full so can't fill any ele...
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;


}