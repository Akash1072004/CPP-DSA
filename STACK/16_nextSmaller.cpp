#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {2,1,5,6,2,3};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; //Find next Smaller...
    vector<int>ans(v.size());
    stack<int>st;
    ans[v.size()-1]=-1;
    st.push(v.size()-1);
    for(int i=v.size()-2;i>=0;i--){
        while(st.size()>0 && v[st.top()]>=v[i])st.pop();
        if(st.size()==0)ans[i]=-1;
        else ans[i]=st.top();
        st.push(i);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}