#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {3,1,2,5,4,6,2,3};
    for(int i=0;i<v.size();i++){ // previous greatest...
        cout<<v[i]<<" ";
    }
    cout<<endl;  
    stack<int>st;
    vector<int>ans(v.size());
    ans[0]=-1;
    st.push(v[0]);
    for(int i=1;i<v.size();i++){
        while(st.size()>0 && st.top()<=v[i])st.pop();
        if(st.size()==0)ans[i]=-1;
        else ans[i]=st.top();
        st.push(v[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}