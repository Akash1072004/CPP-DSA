#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    stack<int>temp; // form a temprorary stack...
    while(st.size()>0){
        cout<<st.top()<<endl;
        temp.push(st.top()); // store all the value of 'st' stack in 'temp'...
        st.pop();
    }
    cout<<st.size()<<endl; // 'st' stack becomes empty so its size is zero...
    while(temp.size()>0){
        st.push(temp.top()); // push all value of 'temp' in 'st' to restore 'st' stack...
        temp.pop();
    }
    cout<<st.size()<<endl;
}