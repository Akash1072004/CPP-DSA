#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);//push the element at top...
    st.push(20);
    st.push(30);
    st.push(40);
    vector<int>v(st.size());
    int i=0;
    while(st.size()>0){ //store the value of stack in vector...
        v[i++]=st.top();
        st.pop();
    }
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";
    }
    cout<<endl; 
    i=0;
    while(i!=v.size()){
        st.push(v[i++]); // store the element of stack in reverse order...
    }
}