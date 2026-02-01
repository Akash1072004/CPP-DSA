#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);//push the element at top...
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;//print size of stack...
    cout<< st.top()<<endl; // print the top value of stack...
    st.pop(); // remove the top value of stack;
    cout<<st.size()<<endl;
    cout<< st.top()<<endl;
}