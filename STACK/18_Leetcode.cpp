#include<bits/stdc++.h>
using namespace std;
void maxSlidingWindow(vector<int>& v, int k) {
        if(k==1)return;
        int x = v.size();
        vector<int>ans(x); // next greater index...
        stack<int>st;
        ans[x-1]=x;
        st.push(x-1);
        for(int i=x-2;i>=0;i--){
            while(st.size()>0 && v[st.top()]<=v[i])st.pop();
            if(st.size()==0)ans[i]=x;
            else ans[i]=st.top();
            st.push(i);
        }
        for(int i=0;i<ans.size();i++){ 
            cout<<ans[i]<<" ";
        }

    }
int main(){
    vector<int>v = {1,3,-1,-3,5,3,6,7};
    for(int i=0;i<v.size();i++){ 
        cout<<v[i]<<" ";
    }
    cout<<endl;
    maxSlidingWindow(v,3);
}