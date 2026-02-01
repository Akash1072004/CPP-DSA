#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {3,1,2,5,4,6,2,3};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; //Find next greatest...
    vector<int>ans(v.size());
    stack<int>st;
    ans[v.size()-1]=-1;
    st.push(v[v.size()-1]);
    for(int i=v.size()-2;i>=0-1;i--){
        while(st.size()>0 && st.top()<=v[i])st.pop();
        if(st.size()==0)ans[i]=-1;
        else ans[i]=st.top();
        st.push(v[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}