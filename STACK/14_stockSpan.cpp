#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{100,80,60,80,70,60,75,85};
    for(int i=0;i<v.size();i++){ 
        cout<<v[i]<<" ";
    }
    cout<<endl;  
    vector<int>ans(v.size());
    stack<int>st;
    ans[0]=-1;
    st.push(0);
    for(int i=1;i<v.size();i++){
        while(st.size()>0 && v[st.top()]<=v[i]){
            st.pop();
        }
        if(st.size()==0)ans[i]=-1;
        else ans[i]=st.top();
        st.push(i);
    }
    for(int i=0;i<ans.size();i++){ 
        ans[i]=i-ans[i];
    }
    for(int i=0;i<ans.size();i++){ 
        cout<<ans[i]<<" ";
    }
}