#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{2,1,5,6,2,3};
    for(int i=0;i<v.size();i++){ 
        cout<<v[i]<<" ";
    }
    int m = 0;
    cout<<endl;  
    vector<int>ans(v.size());
    stack<int>st;
     ans[0]=-1;
    st.push(v[0]);
    for(int i=1;i<v.size();i++){
        while(st.size()>0 && st.top()<=v[i]){
                st.pop();
        }
        if(st.size()==0){
          m = max(v[i-1],ans[i-1]);
                ans[i]=m;
         }
        else {
            m = max(ans[i-1],st.top());
            ans[i]=m;
        }
        st.push(v[i]);
    }
    for(int i=0;i<ans.size();i++){ 
        cout<<ans[i]<<" ";
    }
}