#include<bits/stdc++.h>
using namespace std;
void largestRectangleArea(vector<int>& v) {
        if(v.size()==1)return;
        int x = v.size();
        vector<int>ans(x);
        vector<int>ans2(x);
        stack<int>st;
        ans[v.size()-1]=-1;
        st.push(v.size()-1);
        for(int i=v.size()-2;i>=0;i--){
            while(st.size()>0 && v[st.top()]>=v[i])st.pop();
            if(st.size()==0)ans[i]=-1;
            else ans[i]=st.top();
            st.push(i);
        }
        stack<int>t;
        ans2[0]=-1;
        t.push(0);
        for(int i=1;i<v.size();i++){
            while(t.size()>0 && v[t.top()]>=v[i])t.pop();
            if(t.size()==0)ans2[i]=-1;
            else ans2[i]=t.top();
            t.push(i);
        }
        vector<int>a(x);
        for(int i=0;i<x;i++){
            if(ans[i]==-1)a[i]=ans2[i];
            else if(ans2[i]==-1)a[i]=ans[i];
            else {
                a[i]=(ans[i]-ans2[i])-1;
            }
        }
        int m = INT_MIN;
        for(int i=0;i<x;i++){
            m=max(m,(v[i]*a[i]));
        }
        for(int i=0;i<x;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<x;i++){
            cout<<ans2[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<x;i++){
            cout<<a[i]<<" ";
        }

    }
int main(){
    vector<int>v = {2,1,5,6,2,3};
    for(int i=0;i<v.size();i++){ //leetcode 84
        cout<<v[i]<<" ";
    }
    cout<<endl;
    largestRectangleArea(v);
}